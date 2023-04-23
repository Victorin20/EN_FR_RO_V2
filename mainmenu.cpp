#include "mainmenu.h"

using namespace sf;
using namespace std;

#pragma warning(disable : 4018)
#pragma warning(disable : 4305)
#pragma warning(disable : 4244)
#pragma warning(disable : 26812)
#pragma warning(disable : 26495)


struct irregular_verbs {
    string infinitiv;
    string past_simple_str;
    string past_participle_str;
    bool past_simple;
    bool past_participle;
};

struct dictionar {
    string original;
    string traduction;
    vector<string> synonyms_v;
    vector<string> multitraduciton_v;
    bool multitraduction;
    bool synonyms;
    bool traduction_is_true;
};

//Constructor
mainmenu::mainmenu()
{

    GetDesktopResolution(&horizontal, &vertical);

    this->InitWindow();


    x = horizontal / static_cast<double>(1920);
    y = vertical / static_cast<double>(1080);

    character_size = 45 * x;

    background_texture1->loadFromFile("pictures/background1.jpg");
    background_texture2->loadFromFile("pictures/background2.jpg");
    background_texture3->loadFromFile("pictures/background3.jpg");
    background_texture4->loadFromFile("pictures/background4.jpg");
    background_texture5->loadFromFile("pictures/background5.jpg");
    background_texture6->loadFromFile("pictures/background6 dark.jpg");
    background_texture7->loadFromFile("pictures/background7 dark.jpg");
    background_texture8->loadFromFile("pictures/background8 dark.jpg");
    background_texture9->loadFromFile("pictures/background9 dark.jpg");
    background_texture10->loadFromFile("pictures/background10 dark.jpg");
    background_texture11->loadFromFile("pictures/background11 dark.jpg");
    background_texture12->loadFromFile("pictures/background12 dark.jpg");


#pragma region background
    font.loadFromFile("sprites/LCALLIG.TTF");
    background_table[0] = "background1";
    background_table[1] = "background2";
    background_table[2] = "background3";
    background_table[3] = "background4";
    background_table[4] = "background5";
    background_table[5] = "background6 dark";
    background_table[6] = "background7 dark";
    background_table[7] = "background8 dark";
    background_table[8] = "background9 dark";
    background_table[9] = "background10 dark";
    background_table[10] = "background11 dark";
    background_table[11] = "background12 dark";

    is_dark = false;

    ifstream file("change_background.txt");

    read_background_str = "", space = " ";

    getline(file, read_background_str);

#pragma endregion background
    for (int k(0); k < read_background_str.size(); k++)
    {

        if (read_background_str[k] == space[0])is_dark = true;
    }

    for (int k(0); k < 12; k++)
    {
        if (background_table[k] == read_background_str)
        {
            switch (k)
            {
            case 0:
                background->setTexture(*background_texture1);
                break;

            case 1:
                background->setTexture(*background_texture2);
                break;

            case 2:
                background->setTexture(*background_texture3);
                break;

            case 3:
                background->setTexture(*background_texture4);
                break;

            case 4:
                background->setTexture(*background_texture5);
                break;

            case 5:
                background->setTexture(*background_texture6);
                break;

            case 6:
                background->setTexture(*background_texture7);
                break;

            case 7:
                background->setTexture(*background_texture8);
                break;

            case 8:
                background->setTexture(*background_texture9);
                break;

            case 9:
                background->setTexture(*background_texture10);
                break;

            case 10:
                background->setTexture(*background_texture11);
                break;

            case 11:
                background->setTexture(*background_texture11);
                break;

            }
        }

    }

    background->setScale(x, y);

#pragma region texture and sprite

    level1_texture.loadFromFile("pictures/level1.png");
    level2_texture.loadFromFile("pictures/level2.png");
    level3_texture.loadFromFile("pictures/level3.png");
    level4_texture.loadFromFile("pictures/level4.png");
    level5_texture.loadFromFile("pictures/level5.png");
    level6_texture.loadFromFile("pictures/level6.png");
    level7_texture.loadFromFile("pictures/level7.png");
    level8_texture.loadFromFile("pictures/level8.png");
    level9_texture.loadFromFile("pictures/level9.png");
    level10_texture.loadFromFile("pictures/level10.png");


    level1->setTexture(level1_texture);
    level2->setTexture(level2_texture);
    level3->setTexture(level3_texture);
    level4->setTexture(level4_texture);
    level5->setTexture(level5_texture);
    level6->setTexture(level6_texture);
    level7->setTexture(level7_texture);
    level8->setTexture(level8_texture);
    level9->setTexture(level9_texture);
    level10->setTexture(level10_texture);

    level1->setScale(x, y);
    level2->setScale(x, y);
    level3->setScale(x, y);
    level4->setScale(x, y);
    level5->setScale(x, y);
    level6->setScale(x, y);
    level7->setScale(x, y);
    level8->setScale(x, y);
    level9->setScale(x, y);
    level10->setScale(x, y);


    ro_texture.loadFromFile("pictures/ro.png");
    en_texture.loadFromFile("pictures/en.png");
    fr_texture.loadFromFile("pictures/fr.png");

    ro.setTexture(ro_texture);
    en.setTexture(en_texture);
    fr.setTexture(fr_texture);
    fr2.setTexture(fr_texture);

    ro.setScale(x, y);
    en.setScale(x, y);
    fr.setScale(x, y);
    fr2.setScale(x, y);


    instructions_text_page1_dark_texture.loadFromFile("pictures/instructions_text_page_1_dark.png");
    instructions_text_page2_dark_texture.loadFromFile("pictures/instructions_text_page_2_dark.png");
    instructions_text_page3_dark_texture.loadFromFile("pictures/instructions_text_page_3_dark.png");


    instructions_text_page1_light_texture.loadFromFile("pictures/instructions_text_page_1_light.png");
    instructions_text_page2_light_texture.loadFromFile("pictures/instructions_text_page_2_light.png");
    instructions_text_page3_light_texture.loadFromFile("pictures/instructions_text_page_3_light.png");


    instructions_text_page1.setScale(x, y);
    instructions_text_page2.setScale(x, y);
    instructions_text_page3.setScale(x, y);

    status_texture->loadFromFile("pictures/status.png");
    I_speak_texture->loadFromFile("pictures/I_speak.png");
    logo_texture->loadFromFile("pictures/english_logo.png");
    background_dark_texture->loadFromFile("pictures/black.jpg");
    creator_info_texture.loadFromFile("pictures/creator_info.png");
    I_want_to_learn_texture->loadFromFile("pictures/I_want_to_learn.png");


    logo->setTexture(*logo_texture);
    status->setTexture(*status_texture);
    I_speak->setTexture(*I_speak_texture);
    creator_info.setTexture(creator_info_texture);
    background_dark->setTexture(*background_dark_texture);
    I_want_to_learn->setTexture(*I_want_to_learn_texture);

    logo->setScale(x, y);
    status->setScale(x, y);
    I_speak->setScale(x, y);
    creator_info.setScale(x, y);
    background_dark->setScale(x, y);
    I_want_to_learn->setScale(x, y);


    success_texture.loadFromFile("pictures/success.png");
    first_rectangle_texture.loadFromFile("pictures/rectangle_fr.png");
    second_rectangle_texture.loadFromFile("pictures/rectangle_en.png");
    add_word_logo_texture.loadFromFile("pictures/logo_add_word_input.png");
    add_words_list_rectangle_texture.loadFromFile("pictures/add_list_rectangle.png");


    success.setTexture(success_texture);
    add_word_logo.setTexture(add_word_logo_texture);
    first_rectangle.setTexture(first_rectangle_texture);
    second_rectangle.setTexture(second_rectangle_texture);
    add_words_list_rectangle.setTexture(add_words_list_rectangle_texture);

    success.setScale(x, y);
    add_word_logo.setScale(x, y);
    first_rectangle.setScale(x, y);
    second_rectangle.setScale(x, y);
    add_words_list_rectangle.setScale(x, y);

#pragma endregion texuture and sprite

#pragma region bool


    once = dark_mode = once_dark_light = add_word_en_fr_bool = add_word_en_ro_bool = add_word_fr_ro_bool = show_creator_window = false;
    show_general_window = display_another_traduction = show_general_vocabulary_three = show_general_vocabulary_window = point_found = false;
    adverbs_vocabular = verbs_vocabular = adjectives_vocabular = substantives_vocabular = first_verb_inputed = show_add_a_list_of_words = false;
    first_word = first_choose = second_choose = prepare_verbs = prepare_words = finished = show_instructions = show_instructions_page_2 = false;
    show_add_word_window = show_rewards_window = show_add_a_list_of_words_active = show_general_vocabulary_active = show_irregular_verbs = opened = false;
    display_finish = display_correction = display_add_a_synonym = display_verb_correction_1 = display_verb_correction_2 = show_instructions_page_3 = false;
    once_try = show_mainmenu = once_calculate = full_screen = true;
#pragma endregion bool

#pragma region chapters and paths

    chapter[0] = "chapter 1 Communication";
    chapter[1] = "chapter 2 Describe";
    chapter[2] = "chapter 3 Talk about you";
    chapter[3] = "chapter 4 Objects";
    chapter[4] = "chapter 5 You in time and space";
    chapter[5] = "chapter 6 Express your feelings";
    chapter[6] = "chapter 7 Argue";
    chapter[7] = "chapter 8 Behave in the society";

#pragma endregion chapters and paths

#pragma region int and float
    array_size = progression_float = levels = chapter_int = inputed_word = correct_words = add_list_button = added_words = progression_int = finish_inputed_verb = finish_inputed_word, once_inputed = 0;

#pragma endregion int and float

#pragma region string
    aavs = traduction = past_simple = correction_str = first_language = "";
    second_language = past_participle = add_word_en_str = add_word_fr_str = "";
    point = ",";
    slash = "/";
    synonyms_str = "Synonyms : ";
    progression_string = "Progression : ";
    other_traduction_str = "Other traductions : ";

#pragma endregion string

#pragma region font

    level1_r.setFont(font);
    level2_r.setFont(font);
    level3_r.setFont(font);
    level4_r.setFont(font);
    level5_r.setFont(font);
    level6_r.setFont(font);
    level7_r.setFont(font);
    level8_r.setFont(font);
    level9_r.setFont(font);
    level10_r.setFont(font);


    finish.setFont(font);
    synonyms.setFont(font);
    correction.setFont(font);
    add_word_en.setFont(font);
    translation.setFont(font);
    add_word_fr.setFont(font);
    progression.setFont(font);
    infinitiv_text.setFont(font);
    past_simple_text.setFont(font);
    infinitiv_text_ds.setFont(font);
    other_traductions.setFont(font);
    word_to_translate.setFont(font);
    past_simple_text_ds.setFont(font);
    past_participle_text.setFont(font);
    past_simple_correction.setFont(font);
    past_participle_text_ds.setFont(font);
    past_participle_correction.setFont(font);

    words_list.setFont(font);

    status_text.setFont(font);

#pragma endregion font

#pragma region character size

    level1_r.setCharacterSize(character_size - 20 * x);
    level2_r.setCharacterSize(character_size - 20 * x);
    level3_r.setCharacterSize(character_size - 20 * x);
    level4_r.setCharacterSize(character_size - 20 * x);
    level5_r.setCharacterSize(character_size - 20 * x);
    level6_r.setCharacterSize(character_size - 20 * x);
    level7_r.setCharacterSize(character_size - 20 * x);
    level8_r.setCharacterSize(character_size - 20 * x);
    level9_r.setCharacterSize(character_size - 20 * x);
    level10_r.setCharacterSize(character_size - 20 * x);


    add_word_en.setCharacterSize(character_size + 5 * x);
    add_word_fr.setCharacterSize(character_size + 5 * x);
    correction.setCharacterSize(character_size);
    translation.setCharacterSize(character_size);
    infinitiv_text.setCharacterSize(character_size);
    finish.setCharacterSize(character_size + 20 * x);
    past_simple_text.setCharacterSize(character_size);
    word_to_translate.setCharacterSize(character_size);
    infinitiv_text_ds.setCharacterSize(character_size);
    synonyms.setCharacterSize(character_size - 10 * x);
    past_simple_text_ds.setCharacterSize(character_size);
    past_participle_text.setCharacterSize(character_size);
    progression.setCharacterSize(character_size - 10 * x);
    past_simple_correction.setCharacterSize(character_size);
    past_participle_text_ds.setCharacterSize(character_size);
    other_traductions.setCharacterSize(character_size - 10 * x);
    past_participle_correction.setCharacterSize(character_size);

    words_list.setCharacterSize(character_size - 30 * x);

#pragma endregion character size

#pragma region set Color

    status_text.setFillColor(Color::Red);
    finish.setFillColor(Color::Red);
    correction.setFillColor(Color::Red);
    add_word_en.setFillColor(Color::Red);
    add_word_fr.setFillColor(Color::Red);
    progression.setFillColor(Color::Green);
    past_simple_correction.setFillColor(Color::Red);
    past_participle_correction.setFillColor(Color::Red);

#pragma endregion set Color

#pragma region set Position

    level1->setPosition(120 * x, 5 * y);
    level2->setPosition(120 * x, 105 * y);
    level3->setPosition(120 * x, 210 * y);
    level4->setPosition(120 * x, 315 * y);
    level5->setPosition(120 * x, 420 * y);
    level6->setPosition(120 * x, 525 * y);
    level7->setPosition(120 * x, 630 * y);
    level8->setPosition(120 * x, 735 * y);
    level9->setPosition(120 * x, 840 * y);
    level10->setPosition(120 * x, 945 * y);


    level1_r.setPosition(230 * x, 25 * y);
    level2_r.setPosition(230 * x, 130 * y);
    level3_r.setPosition(230 * x, 235 * y);
    level4_r.setPosition(230 * x, 340 * y);
    level5_r.setPosition(230 * x, 445 * y);
    level6_r.setPosition(230 * x, 550 * y);
    level7_r.setPosition(230 * x, 655 * y);
    level8_r.setPosition(230 * x, 760 * y);
    level9_r.setPosition(230 * x, 865 * y);
    level10_r.setPosition(230 * x, 970 * y);


    actual_level->setPosition(1500 * x, 80 * y);

    status->setPosition(1450 * x, 10 * y);
    logo->setPosition(480 * x, 0);

    add_words_list_rectangle.setPosition(150 * x, 90 * y);

    success.setPosition(560 * x, 400 * y);

    instructions_text_page1.setPosition(20 * x, 40 * y);
    instructions_text_page2.setPosition(20 * x, 20 * y);
    instructions_text_page3.setPosition(20 * x, 0);
    creator_info.setPosition(20 * x, 10 * y);
    en.setPosition(260 * x, 700 * y);
    fr.setPosition(1260 * x, 700 * y);
    ro.setPosition(1260 * x, 700 * y);
    fr2.setPosition(260 * x, 700 * y);
    finish.setPosition(800 * x, 350 * y);
    synonyms.setPosition(50 * x, 650 * y);
    correction.setPosition(700 * x, 400 * y);
    add_word_fr.setPosition(1080 * x, 550 * y);
    add_word_en.setPosition(80 * x, 550 * y);
    translation.setPosition(700 * x, 250 * y);
    progression.setPosition(1550 * x, 20 * y);
    add_word_logo.setPosition(550 * x, 150 * y);
    infinitiv_text.setPosition(400 * x, 70 * y);
    first_rectangle.setPosition(60 * x, 500 * y);
    past_simple_text.setPosition(800 * x, 70 * y);
    other_traductions.setPosition(50 * x, 750 * y);
    second_rectangle.setPosition(1060 * x, 500 * y);
    word_to_translate.setPosition(700 * x, 100 * y);
    infinitiv_text_ds.setPosition(400 * x, 300 * y);
    past_simple_text_ds.setPosition(800 * x, 300 * y);
    past_participle_text.setPosition(1300 * x, 70 * y);
    past_simple_correction.setPosition(800 * x, 500 * y);
    past_participle_text_ds.setPosition(1300 * x, 300 * y);
    past_participle_correction.setPosition(1300 * x, 500 * y);
    words_list.setPosition(200 * x, 150 * y);



#pragma endregion set Position


#pragma region set String

    finish.setString("Finish !");
    infinitiv_text.setString("Infinitive");
    past_simple_text.setString("Past simple form");
    past_participle_text.setString("Past participle");


#pragma endregion set String

    read_irregular_verbs(infinitiv_v, past_simple_v, past_participle_v);
}

//desctructor
mainmenu::~mainmenu()
{

    delete[] this->background_table;
    delete[] this->chapter;


    delete this->background;
    delete this->background_dark;
    delete this->logo;
    delete this->status;
    delete this->actual_level;
    delete this->I_speak;
    delete this->I_want_to_learn;


    delete this->level1;
    delete this->level2;
    delete this->level3;
    delete this->level4;
    delete this->level5;
    delete this->level6;
    delete this->level7;
    delete this->level8;
    delete this->level9;
    delete this->level10;



    delete this->background_dark_texture;
    delete this->logo_texture;
    delete this->status_texture;
    delete this->actual_level_texture;
    delete this->I_speak_texture;
    delete this->I_want_to_learn_texture;


    delete this->background_texture1;
    delete this->background_texture2;
    delete this->background_texture3;
    delete this->background_texture4;
    delete this->background_texture5;
    delete this->background_texture6;
    delete this->background_texture7;
    delete this->background_texture8;
    delete this->background_texture9;
    delete this->background_texture10;
    delete this->background_texture11;
    delete this->background_texture12;




    delete this->window;
    delete this->my_button;
}

//Initialiaze the window
void mainmenu::InitWindow()
{
    sf::Image icon;
    icon.loadFromFile("icons/icon.png");

    this->window = new RenderWindow(VideoMode(horizontal, vertical), "English Learn", Style::Fullscreen);
    this->window->setFramerateLimit(100);
    this->my_button = new button;

    this->window->setIcon(256, 256, icon.getPixelsPtr());
}


void mainmenu::run_window()
{
    dictionar word;
    irregular_verbs verb;

    while (this->window->isOpen())
    {
        Vector2i Position; Position = Mouse::getPosition();
        this->update();

        keyboard_f11(&full_screen, &once_inputed);

        if (!full_screen && once_inputed == 1)
        {
            set_default_screen();
            full_screen = false;
            once_inputed = 0;
        }

        if (full_screen && once_inputed == 1)
        {
            set_full_screen();
            full_screen = true;
            once_inputed = 0;
        }

        if (show_creator_window)this->f_creator();
        if (show_rewards_window)this->f_rewards();
        if (show_mainmenu)this->f_show_mainmenu();
        if (show_instructions)this->f_instructions();
        if (show_add_word_window)this->f_add_word_window();
        if (show_general_window)this->f_show_general_window();
        if (show_instructions_page_2)this->f_instructions_page2();
        if (show_instructions_page_3)this->f_instructions_page3();
        if (show_add_a_list_of_words)this->f_add_a_list_of_words();
        if (show_irregular_verbs)this->f_show_irregulars_verbs();
        if (show_general_vocabulary_three)this->f_general_vocabulary_three();
        if (show_general_vocabulary_active)this->f_general_vocabulary_active();
        if (show_add_a_list_of_words_active)this->f_add_a_list_of_words_active();
        if (show_general_vocabulary_window)this->f_show_general_vocabulary_window();

        if (!dark_mode && !is_dark && !once_dark_light)
        {
            infinitiv_text.setFillColor(Color::Black);
            past_simple_text.setFillColor(Color::Black);
            past_participle_text.setFillColor(Color::Black);

            infinitiv_text_ds.setFillColor(Color::Black);
            past_simple_text_ds.setFillColor(Color::Black);
            past_participle_text_ds.setFillColor(Color::Black);


            synonyms.setFillColor(Color::Black);
            translation.setFillColor(Color::Black);
            word_to_translate.setFillColor(Color::Black);
            other_traductions.setFillColor(Color::Black);

            add_word_en.setFillColor(Color::Blue);
            add_word_fr.setFillColor(Color::Blue);

            words_list.setFillColor(Color::Black);

            once_dark_light = true;
        }
        if ((dark_mode && !once_dark_light) || (is_dark && !once_dark_light))
        {
            infinitiv_text.setFillColor(Color::White);
            past_simple_text.setFillColor(Color::White);
            past_participle_text.setFillColor(Color::White);

            infinitiv_text_ds.setFillColor(Color::White);
            past_simple_text_ds.setFillColor(Color::White);
            past_participle_text_ds.setFillColor(Color::White);


            synonyms.setFillColor(Color::White);
            translation.setFillColor(Color::White);
            word_to_translate.setFillColor(Color::White);
            other_traductions.setFillColor(Color::White);


            add_word_en.setFillColor(Color::Red);
            add_word_fr.setFillColor(Color::Red);

            words_list.setFillColor(Color::White);

            once_dark_light = true;
        }


        ///////////////////////////////Restart button general window ////////////////////////////
        if (Mouse::isButtonPressed(Mouse::Left) && show_general_window && inputed_word != 0 && my_button->restart_button_cliked(Position))
        {
            traduction = "";
            inputed_word = 0;
            prepare_words = true;
            finish_inputed_word = 0;
            display_correction = false;
            display_finish = false;
            synonyms_str = "Synonyms : ";
            once_dark_light = false;
            other_traduction_str = "Other traductions : ";
            while (word.synonyms_v.size() != 0)word.synonyms_v.pop_back();
            while (word.multitraduciton_v.size() != 0)word.multitraduciton_v.pop_back();

            save_progression(inputed_word, chapter[chapter_int]);
            read_progression(&inputed_word, chapter[chapter_int]);

        }

        /////////////////////////////////Restart button general vocabulary window active ////////////////////////////
        if (Mouse::isButtonPressed(Mouse::Left) && show_general_vocabulary_active && inputed_word != 0 && my_button->restart_button_cliked(Position))
        {
            traduction = "";
            inputed_word = 0;
            prepare_words = true;
            display_finish = false;
            once_dark_light = false;
            finish_inputed_word = 0;
            display_correction = false;
            synonyms_str = "Synonyms : ";
            once_dark_light = false;
            other_traduction_str = "Other traductions : ";
            while (word.synonyms_v.size() != 0)word.synonyms_v.pop_back();
            while (word.multitraduciton_v.size() != 0)word.multitraduciton_v.pop_back();

            save_progression_general_vocabulary(inputed_word, first_language, second_language, aavs);
            read_progression_general_vocabulary(&inputed_word, first_language, second_language, aavs);
        }

        /////////////////////////////////Restart button irregular verbs window ///////////////////////
        if (Mouse::isButtonPressed(Mouse::Left) && show_irregular_verbs && my_button->restart_button_cliked(Position))
        {

            past_simple = "";
            inputed_word = 0;
            prepare_verbs = true;
            past_participle = "";
            finish_inputed_verb = 0;
            first_verb_inputed = false;
            past_simple_correction.setString("");
            past_participle_correction.setString("");
            once_dark_light = false;

        }


        ////////////////////////Help button clicked on general vocabulary active And general window ////////////////////////////
        if (Mouse::isButtonPressed(Mouse::Left) && (show_general_vocabulary_active || show_general_window) && my_button->help_button_clicked(Position))
        {
            bool same = true;

            if (traduction.size() > 0)
            {
                for (int k = 0; k < traduction.size(); k++)if (traduction[k] != word.traduction[k])same = false;
            }

            if (same && traduction.size() < word.traduction.size())traduction += word.traduction[traduction.size()];

            if (traduction.size() == 0)traduction += word.traduction[traduction.size()];

            pause();
        }

        ///////////////////////Help button clicked on irregular verbs window //////////////////////////////////////
        if (Mouse::isButtonPressed(Mouse::Left) && show_irregular_verbs && my_button->help2_button_clicked(Position))
        {
            if (!first_verb_inputed)
            {

                bool same = true;

                if (past_simple.size() > 0)
                {
                    for (int k = 0; k < past_simple.size(); k++)if (past_simple[k] != verb.past_simple_str[k])same = false;
                }

                if (same && past_simple.size() < verb.past_simple_str.size())past_simple += verb.past_simple_str[past_simple.size()];

                if (past_simple.size() == 0)past_simple += verb.past_simple_str[past_simple.size()];

                pause();
            }

            if (first_verb_inputed)
            {
                bool same = true;

                if (past_participle.size() > 0)
                {
                    for (int k = 0; k < past_participle.size(); k++)if (past_participle[k] != verb.past_participle_str[k])same = false;
                }

                if (same && past_participle.size() < verb.past_participle_str.size())past_participle += verb.past_participle_str[past_participle.size()];

                if (past_participle.size() == 0)past_participle += verb.past_participle_str[past_participle.size()];

                pause();

            }

        }

        /////////////////////////Prepare verbs ///////////////////
        if (prepare_verbs)
        {
            verb.past_simple = false;
            verb.past_participle = false;
            display_verb_correction_2 = false;
            display_verb_correction_1 = false;

            verb.infinitiv = infinitiv_v[inputed_word];
            verb.past_participle_str = past_participle_v[inputed_word];
            verb.past_simple_str = past_simple_v[inputed_word];

            infinitiv_text_ds.setString(verb.infinitiv);

            prepare_verbs = false;
        }

        ////////////////////////////////////Prepare words ////////////////////////
        if ((show_general_window || show_general_vocabulary_active) && prepare_words && inputed_word < int(array_size))
        {

            word.synonyms = false;
            word.multitraduction = false;
            word.traduction_is_true = false;

            if (first_language == "fr")word.original = frensh[inputed_word];
            if (first_language == "en")word.original = english[inputed_word];
            if (first_language == "ro")word.original = romain[inputed_word];

            if (second_language == "fr")word.traduction = frensh[inputed_word];
            if (second_language == "en")word.traduction = english[inputed_word];
            if (second_language == "ro")word.traduction = romain[inputed_word];

            string synonym = "";
            for (int k(0); k < word.original.size(); k++)
            {
                if (word.original[k] != slash[0])synonym += word.original[k];
                if (word.original[k] == slash[0]) { word.synonyms = true, word.synonyms_v.push_back(synonym), synonym = ""; }
            }

            if (word.synonyms == true && word.synonyms_v.size() > 1)
            {
                word.original = word.synonyms_v[rand() % word.synonyms_v.size()];
            }
            synonym = "";
            for (int k(0); k < word.traduction.size(); k++)
            {
                if (word.traduction[k] != slash[0])synonym += word.traduction[k];
                if (word.traduction[k] == slash[0]) { word.multitraduction = true, word.multitraduciton_v.push_back(synonym), synonym = ""; }
            }

            if (word.multitraduction)word.traduction = word.multitraduciton_v[rand() % word.multitraduciton_v.size()];

            original_str = word.original;
            prepare_words = false;
        }

        ////////////////////////////////When we finish input the word on a general window //////////////////
        if (finish_inputed_word == 1 && !once && (show_general_window || show_general_vocabulary_active))
        {

            if (word.synonyms)
            {
                for (int k(0); k < word.synonyms_v.size(); k++)
                {
                    synonyms_str += word.synonyms_v[k];
                    if (k < word.synonyms_v.size() - 1) synonyms_str += ",  ";
                }
            }

            if (word.multitraduction)
            {
                for (int k(0); k < word.multitraduciton_v.size(); k++)
                {
                    other_traduction_str += word.multitraduciton_v[k];
                    if (k < word.multitraduciton_v.size() - 1)other_traduction_str += ",  ";
                }
            }

            string copy_word = "";
            //////////////veryfinng if the traduction is true///////////////////
            if (word.traduction == traduction)word.traduction_is_true = true;
            if (!word.traduction_is_true)
            {
                for (int k(0); k < traduction.size(); k++)
                {
                    if (traduction[k] != point[0])copy_word += traduction[k];

                    if (traduction[k] == point[0])
                    {
                        point_found = true;
                        if (word.traduction == copy_word)word.traduction_is_true = true;
                    }
                }
            }

            if (point_found && aavs != "")
            {
                delete_word(inputed_word, aavs, first_language, second_language);
                point_found = false;
            }

            if (!word.traduction_is_true)display_correction = true, translation.setFillColor(Color::Magenta);
            if (word.traduction_is_true)
            {
                correct_words = 1;
                save_correct_words(correct_words);
                translation.setFillColor(Color::Green);
            }
            if (display_correction)correction.setString(word.traduction);
            once = true;
        }

        if (finish_inputed_word > 1)
        {
            once = false;
            prepare_words = true;
            word.synonyms = false;
            display_correction = false;
            if (inputed_word < int(array_size))inputed_word += 1;
            traduction = "";
            synonyms_str = "Synonyms : ";
            other_traduction_str = "Other traductions : ";
            if (dark_mode || is_dark)translation.setFillColor(Color::White);
            if (!dark_mode && !is_dark)translation.setFillColor(Color::Black);
            while (word.synonyms_v.size() != 0)word.synonyms_v.pop_back();
            while (word.multitraduciton_v.size() != 0)word.multitraduciton_v.pop_back();
            if (inputed_word == int(array_size))progression_int = 100, display_finish = true;
            finish_inputed_word = 0;

        }

        ///////////////////Get add words inputed //////////////////////
        if (finish_inputed_word == 1 && show_add_word_window)
        {
            if (add_word_en_fr_bool)
            {
                first_word = true;
                add_word_number++;
                first_language = "en";
                second_language = "fr";
                ofstream file_en, file_fr;

                if (aavs == "adverbs") { file_en.open("general_vocabulary/en_fr/adverbs_en.txt", ios::app);      file_fr.open("general_vocabulary/en_fr/adverbs_fr.txt", ios::app); }
                if (aavs == "verbs") { file_en.open("general_vocabulary/en_fr/verbs_en.txt", ios::app);        file_fr.open("general_vocabulary/en_fr/verbs_fr.txt", ios::app); }
                if (aavs == "adjectives") { file_en.open("general_vocabulary/en_fr/adjectives_en.txt", ios::app);   file_fr.open("general_vocabulary/en_fr/adjectives_fr.txt", ios::app); }
                if (aavs == "substantives") { file_en.open("general_vocabulary/en_fr/substantives_en.txt", ios::app); file_fr.open("general_vocabulary/en_fr/substantives_fr.txt", ios::app); }


                if (add_word_number % 2 == 0 && !alredy_here(first_language, second_language, aavs, add_word_en_str))
                {
                    file_en << add_word_en_str << endl;
                    file_fr << add_word_fr_str << endl;
                    add_word_en_str = "";
                    add_word_fr_str = "";
                    first_word = false;
                    add_word_en.setString("");
                    add_word_fr.setString("");
                    added_words = 1;
                    save_added_words(added_words);
                    file_en.close();
                    file_fr.close();
                }
                if (add_word_number % 2 == 0 && alredy_here(first_language, second_language, aavs, add_word_en_str))
                {
                    add_word_en_str = "";
                    add_word_fr_str = "";
                    first_word = false;
                    add_word_en.setString("");
                    add_word_fr.setString("");
                    file_en.close();
                    file_fr.close();

                }

                finish_inputed_word = 0;
            }

            if (add_word_en_ro_bool)
            {
                first_word = true;
                add_word_number++;
                ofstream file_en, file_ro;
                first_language = "en";
                second_language = "ro";

                if (aavs == "adverbs") { file_en.open("general_vocabulary/en_ro/adverbs_en.txt", ios::app);      file_ro.open("general_vocabulary/en_ro/adverbs_ro.txt", ios::app); }
                if (aavs == "verbs") { file_en.open("general_vocabulary/en_ro/verbs_en.txt", ios::app);        file_ro.open("general_vocabulary/en_ro/verbs_ro.txt", ios::app); }
                if (aavs == "adjectives") { file_en.open("general_vocabulary/en_ro/adjectives_en.txt", ios::app);   file_ro.open("general_vocabulary/en_ro/adjectives_ro.txt", ios::app); }
                if (aavs == "substantives") { file_en.open("general_vocabulary/en_ro/substantives_en.txt", ios::app); file_ro.open("general_vocabulary/en_ro/substantives_ro.txt", ios::app); }


                if (add_word_number % 2 == 0 && !alredy_here(first_language, second_language, aavs, add_word_en_str))
                {
                    file_en << add_word_en_str << endl;
                    file_ro << add_word_fr_str << endl;
                    add_word_en_str = "";
                    add_word_fr_str = "";
                    first_word = false;
                    add_word_en.setString("");
                    add_word_fr.setString("");
                    added_words = 1;
                    save_added_words(added_words);
                    file_en.close();
                    file_ro.close();
                }
                if (add_word_number % 2 == 0 && alredy_here(first_language, second_language, aavs, add_word_en_str))
                {
                    add_word_en_str = "";
                    add_word_fr_str = "";
                    first_word = false;
                    add_word_en.setString("");
                    add_word_fr.setString("");
                    file_en.close();
                    file_ro.close();

                }

                finish_inputed_word = 0;

            }

            if (add_word_fr_ro_bool)
            {
                first_word = true;
                add_word_number++;

                ofstream file_fr, file_ro;

                if (aavs == "adverbs") { file_fr.open("general_vocabulary/fr_ro/adverbs_en.txt", ios::app);      file_ro.open("general_vocabulary/fr_ro/adverbs_ro.txt", ios::app); }
                if (aavs == "verbs") { file_fr.open("general_vocabulary/fr_ro/verbs_en.txt", ios::app);        file_ro.open("general_vocabulary/fr_ro/verbs_ro.txt", ios::app); }
                if (aavs == "adjectives") { file_fr.open("general_vocabulary/fr_ro/adjectives_en.txt", ios::app);   file_ro.open("general_vocabulary/fr_ro/adjectives_ro.txt", ios::app); }
                if (aavs == "substantives") { file_fr.open("general_vocabulary/fr_ro/substantives_en.txt", ios::app); file_ro.open("general_vocabulary/fr_ro/substantives_ro.txt", ios::app); }


                if (add_word_number % 2 == 0)
                {
                    file_fr << add_word_en_str << endl;
                    file_ro << add_word_fr_str << endl;
                    add_word_en_str = "";
                    add_word_fr_str = "";
                    first_word = false;
                    add_word_en.setString("");
                    add_word_fr.setString("");
                    added_words = 1;
                    save_added_words(added_words);
                    file_fr.close();
                    file_ro.close();
                }

                if (add_word_number % 2 == 0 && alredy_here(first_language, second_language, aavs, add_word_en_str))
                {
                    add_word_en_str = "";
                    add_word_fr_str = "";
                    first_word = false;
                    add_word_en.setString("");
                    add_word_fr.setString("");
                    file_fr.close();
                    file_ro.close();

                }


                finish_inputed_word = 0;

            }

        }

        if (finish_inputed_word == 1 && show_add_a_list_of_words_active)
        {
            int zeros_number = 0;

            for (int k(0); k < add_word_en_str.size(); k++)
            {
                if (add_word_en_str[k] == '0')zeros_number++;
            }

            switch (add_list_button)
            {
            case 1:
                if (zeros_number == 2)add_a_list_of_words_en_fr(add_word_en_str);
                break;

            case 2:
                if (zeros_number == 2)add_a_list_of_words_en_ro(add_word_en_str);
                break;

            case 3:
                if (zeros_number == 2)add_a_list_of_words_fr_ro(add_word_en_str);
                break;

            case 4:
                if (zeros_number == 3)add_a_list_of_words_en_fr_ro(add_word_en_str);
                break;
            }
            finish_inputed_word = 0;
            add_word_en_str = "";
            long_pause();

        }

        //////////////////when we input a verb in irregular verbs window ////////////////////
        if (finish_inputed_verb >= 1 && !first_verb_inputed)
        {
            if (verb.past_simple_str == past_simple)verb.past_simple = true;

            if (verb.past_simple)past_simple_text_ds.setFillColor(Color::Green);

            else if (!verb.past_simple)past_simple_text_ds.setFillColor(Color::Magenta), display_verb_correction_1 = true;

            if (display_verb_correction_1)past_simple_correction.setString(verb.past_simple_str);

            first_verb_inputed = true;

            finish_inputed_verb = 0;
        }

        if (finish_inputed_verb >= 1 && first_verb_inputed)
        {
            if (verb.past_participle_str == past_participle)verb.past_participle = true;

            if (verb.past_participle)past_participle_text_ds.setFillColor(Color::Green);

            else if (!verb.past_participle)past_participle_text_ds.setFillColor(Color::Magenta), display_verb_correction_2 = true;

            if (display_verb_correction_2)past_participle_correction.setString(verb.past_participle_str);

            if (finish_inputed_verb > 1)
            {
                inputed_word++;
                past_participle = "";
                past_simple = "";
                if (dark_mode || is_dark)past_participle_text_ds.setFillColor(Color::White), past_simple_text_ds.setFillColor(Color::White), past_participle_text_ds.setFillColor(Color::White);
                if (!dark_mode && !is_dark)past_participle_text_ds.setFillColor(Color::Black), past_simple_text_ds.setFillColor(Color::Black), past_participle_text_ds.setFillColor(Color::Black);

                prepare_verbs = true;
                first_verb_inputed = false;
                past_simple_correction.setString("");
                past_participle_correction.setString("");
                finish_inputed_verb = 0;
            }
        }


    }

}

void mainmenu::f_show_mainmenu()
{

    if (once_calculate)
    {
        read_correct_words(&correct_words);
        read_added_words(&added_words);

        if (correct_words < 500)actual_level_texture->loadFromFile("pictures/level0.png"), actual_level->setTexture(*actual_level_texture), levels = 0;
        if (correct_words >= 500 && correct_words < 1000)actual_level_texture->loadFromFile("pictures/level1.png"), actual_level->setTexture(*actual_level_texture), levels = 1;
        if (correct_words >= 1000 && correct_words < 2500)actual_level_texture->loadFromFile("pictures/level2.png"), actual_level->setTexture(*actual_level_texture), levels = 2;
        if (correct_words >= 2500 && correct_words < 5000 && added_words >= 200)actual_level_texture->loadFromFile("pictures/level3.png"), actual_level->setTexture(*actual_level_texture), levels = 3;
        if (correct_words >= 5000 && correct_words < 8000 && added_words >= 500)actual_level_texture->loadFromFile("pictures/level4.png"), actual_level->setTexture(*actual_level_texture), levels = 4;
        if (correct_words >= 8000 && correct_words < 15000 && added_words >= 1000)actual_level_texture->loadFromFile("pictures/level5.png"), actual_level->setTexture(*actual_level_texture), levels = 5;
        if (correct_words >= 15000 && correct_words < 25000 && added_words >= 3000)actual_level_texture->loadFromFile("pictures/level6.png"), actual_level->setTexture(*actual_level_texture), levels = 6;
        if (correct_words >= 25000 && correct_words < 40000 && added_words >= 4500)actual_level_texture->loadFromFile("pictures/level7.png"), actual_level->setTexture(*actual_level_texture), levels = 7;
        if (correct_words >= 40000 && correct_words < 75000 && added_words >= 7000)actual_level_texture->loadFromFile("pictures/level8.png"), actual_level->setTexture(*actual_level_texture), levels = 8;
        if (correct_words >= 75000 && correct_words < 100000 && added_words >= 10000)actual_level_texture->loadFromFile("pictures/level9.png"), actual_level->setTexture(*actual_level_texture), levels = 9;
        if (correct_words >= 100000 && added_words >= 15000)actual_level_texture->loadFromFile("pictures/level10.png"), actual_level->setTexture(*actual_level_texture), levels = 10;

        once_calculate = false;
        correct_words = 0;
        added_words = 0;
    }


    this->window->clear();
    Vector2i Position; Position = Mouse::getPosition();
    if (dark_mode)this->window->draw(*background_dark);
    if (!dark_mode)this->window->draw(*background);

    this->window->draw(*logo);
    this->window->draw(my_button->get_communication_button());
    this->window->draw(my_button->get_argue_button());
    this->window->draw(my_button->get_behave_button());
    this->window->draw(my_button->get_dark_button());
    this->window->draw(my_button->get_light_button());
    this->window->draw(my_button->get_describe_button());
    this->window->draw(my_button->get_express_feelings_button());
    this->window->draw(my_button->get_change_background_button());
    this->window->draw(my_button->get_exit_button());
    this->window->draw(my_button->get_talk_about_you_button());
    this->window->draw(my_button->get_set_in_time_button());
    this->window->draw(my_button->get_objects_button());
    this->window->draw(my_button->get_general_vocabulary_button());
    this->window->draw(my_button->get_instructions_button());
    this->window->draw(my_button->get_irregulars_verbs_button());
    this->window->draw(my_button->get_rewards_button());


    if (first_language != "ro" && second_language != "ro")this->window->draw(my_button->get_ro_button());
    if (first_language != "en" && second_language != "en")this->window->draw(my_button->get_en_button());
    if (first_language != "fr" && second_language != "fr")this->window->draw(my_button->get_fr_button());


    this->window->draw(*status);
    this->window->draw(*actual_level);

    switch (levels)
    {
    case 0:
        status_text.setCharacterSize(character_size - 18 * x);
        status_text.setPosition(1500 * x, 15 * y);
        status_text.setString("Beginer");
        this->window->draw(status_text);
        break;
    case 1:
        status_text.setCharacterSize(character_size - 18 * x);
        status_text.setPosition(1460 * x, 15 * y);
        status_text.setString("Novice low");
        this->window->draw(status_text);
        break;
    case 2:
        status_text.setCharacterSize(character_size - 18 * x);
        status_text.setPosition(1460 * x, 15 * y);
        status_text.setString("Novice mid");
        this->window->draw(status_text);
        break;
    case 3:
        status_text.setCharacterSize(character_size - 18 * x);
        status_text.setPosition(1460 * x, 15 * y);
        status_text.setString("Novice high");
        this->window->draw(status_text);
        break;
    case 4:
        status_text.setCharacterSize(character_size - 22 * x);
        status_text.setPosition(1460 * x, 15 * y);
        status_text.setString("Medium low");
        this->window->draw(status_text);
        break;
    case 5:
        status_text.setCharacterSize(character_size - 22 * x);
        status_text.setPosition(1460 * x, 15 * y);
        status_text.setString("Medium mid");
        this->window->draw(status_text);
        break;
    case 6:
        status_text.setCharacterSize(character_size - 22 * x);
        status_text.setPosition(1460 * x, 15 * y);
        status_text.setString("Medium high");
        this->window->draw(status_text);
        break;
    case 7:
        status_text.setCharacterSize(character_size - 23 * x);
        status_text.setPosition(1460 * x, 25 * y);
        status_text.setString("Advanced low");
        this->window->draw(status_text);
        break;
    case 8:
        status_text.setCharacterSize(character_size - 23 * x);
        status_text.setPosition(1460 * x, 25 * y);
        status_text.setString("Advanced mid");
        this->window->draw(status_text);
        break;
    case 9:
        status_text.setCharacterSize(character_size - 23 * x);
        status_text.setPosition(1460 * x, 25 * y);
        status_text.setString("Advanced high");
        this->window->draw(status_text);
        break;
    case 10:
        status_text.setCharacterSize(character_size - 10 * x);
        status_text.setPosition(1480 * x, 15 * y);
        status_text.setString("Expert");
        this->window->draw(status_text);
        break;
    }


    if (first_choose)this->window->draw(*I_speak);
    if (second_choose)this->window->draw(*I_want_to_learn);
    ////////////////////////////Exit button ////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->exit_button_clicked(Position))this->window->close();

    //////////////////////////Change for dark or light mode //////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->dark_button_clicked(Position))dark_mode = true, once_dark_light = false;
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->light_button_clicked(Position) && dark_mode)dark_mode = false, once_dark_light = false;
    ////////////////////////Change background ////////////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->change_background_button_clicked(Position))
    {
        read_background(background_table, *background_texture1, *background_texture2, *background_texture3, *background_texture4, *background_texture5,
            *background_texture6, *background_texture7, *background_texture8, *background_texture9, *background_texture10, *background_texture11,
            *background_texture12, *background, is_dark);

        once_dark_light = false;
        pause();
    }

    //////////////////////////////Choose language ////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && !finished)
    {
        if (my_button->ro_button_clicked(Position) && !first_choose)first_language = "ro", first_choose = true, I_speak->setPosition(547 * x, 740 * y), pause();
        if (my_button->fr_button_clicked(Position) && !first_choose)first_language = "fr", first_choose = true, I_speak->setPosition(834 * x, 740 * y), pause();
        if (my_button->en_button_clicked(Position) && !first_choose)first_language = "en", first_choose = true, I_speak->setPosition(1121 * x, 740 * y), pause();

        if (my_button->ro_button_clicked(Position) && (first_choose && first_language != "ro"))second_language = "ro", second_choose = true, I_want_to_learn->setPosition(547 * x, 740 * y), finished = true;
        if (my_button->fr_button_clicked(Position) && (first_choose && first_language != "fr"))second_language = "fr", second_choose = true, I_want_to_learn->setPosition(834 * x, 740 * y), finished = true;
        if (my_button->en_button_clicked(Position) && (first_choose && first_language != "en"))second_language = "en", second_choose = true, I_want_to_learn->setPosition(1121 * x, 740 * y), finished = true;
    }
    if (Mouse::isButtonPressed(Mouse::Right) && (first_choose || second_choose))
    {
        if (my_button->ro_button_clicked(Position) && first_choose)first_language = "", first_choose = false, finished = false;
        if (my_button->fr_button_clicked(Position) && first_choose)first_language = "", first_choose = false, finished = false;
        if (my_button->en_button_clicked(Position) && first_choose)first_language = "", first_choose = false, finished = false;

        if (my_button->ro_button_clicked(Position) && second_choose)second_language = "", second_choose = false, finished = false;
        if (my_button->fr_button_clicked(Position) && second_choose)second_language = "", second_choose = false, finished = false;
        if (my_button->en_button_clicked(Position) && second_choose)second_language = "", second_choose = false, finished = false;

    }




    //////////////////////////////Get intructions window ////////////////////////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->instructions_button_clicked(Position))
    {
        show_instructions = true;
        show_mainmenu = false;
        pause();
    }

    //////////////////////////////Get rewards window /////////////////////////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->rewards_button_clicked(Position))
    {
        show_rewards_window = true;
        show_mainmenu = false;
        pause();
    }

    //////////////////////////////Get general vocabulary three ////////////////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->general_vocabulary_button_clicked(Position))
    {
        show_mainmenu = false;
        show_general_vocabulary_three = true;
        pause();
    }

    //////////////////////////////Get irregulars verbs window //////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->irregulars_verbs_button_clicked(Position))
    {
        show_mainmenu = false;
        prepare_verbs = true;
        show_irregular_verbs = true;
        array_size = infinitiv_v.size();

        read_progression_ir(&inputed_word);
    }

    //////////////////////////////Get general window ///////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && (first_choose && second_choose))
    {
        ///////////////////////////////////////chapters///////////////////////////////
        if (my_button->communication_button_clicked(Position))
        {
            show_mainmenu = false;
            show_general_window = true;
            prepare_words = true;
            chapter_int = 0, read_progression(&inputed_word, chapter[chapter_int]);
            read(english, frensh, romain, chapter[chapter_int]);
            array_size = english.size();
        }
        if (my_button->describe_button_clicked(Position))
        {
            show_mainmenu = false;
            show_general_window = true;
            prepare_words = true;
            chapter_int = 1, read_progression(&inputed_word, chapter[chapter_int]);
            read(english, frensh, romain, chapter[chapter_int]);
            array_size = english.size();
        }
        if (my_button->talk_about_you_button_clicked(Position))
        {
            show_mainmenu = false;
            show_general_window = true;
            prepare_words = true;
            chapter_int = 2, read_progression(&inputed_word, chapter[chapter_int]);
            read(english, frensh, romain, chapter[chapter_int]);
            array_size = english.size();
        }

        if (my_button->objects_button_clicked(Position))
        {
            show_mainmenu = false;
            show_general_window = true;
            prepare_words = true;
            chapter_int = 3, read_progression(&inputed_word, chapter[chapter_int]);
            read(english, frensh, romain, chapter[chapter_int]);
            array_size = english.size();
        }

        if (my_button->set_in_time_button_clicked(Position))
        {
            show_mainmenu = false;
            show_general_window = true;
            prepare_words = true;
            chapter_int = 4, read_progression(&inputed_word, chapter[chapter_int]);
            read(english, frensh, romain, chapter[chapter_int]);
            array_size = english.size();
        }
        if (my_button->express_feelings_button_clicked(Position))
        {
            show_mainmenu = false;
            show_general_window = true;
            prepare_words = true;
            chapter_int = 5, read_progression(&inputed_word, chapter[chapter_int]);
            read(english, frensh, romain, chapter[chapter_int]);
            array_size = english.size();
        }

        if (my_button->argue_button_clicked(Position))
        {
            show_mainmenu = false;
            show_general_window = true;
            prepare_words = true;
            chapter_int = 6, read_progression(&inputed_word, chapter[chapter_int]);
            read(english, frensh, romain, chapter[chapter_int]);
            array_size = english.size();
        }
        if (my_button->behave_button_clicked(Position))
        {
            show_mainmenu = false;
            show_general_window = true;
            prepare_words = true;
            chapter_int = 7, read_progression(&inputed_word, chapter[chapter_int]);
            read(english, frensh, romain, chapter[chapter_int]);
            array_size = english.size();
        }
        ///////////////////////////////////////chapters///////////////////////////////

        if (my_button->dark_button_clicked(Position))dark_mode = true;
        if (my_button->light_button_clicked(Position))dark_mode = false;

    }


    this->window->display();


}

void mainmenu::f_show_general_vocabulary_window()
{
    this->window->clear();
    Vector2i Position; Position = Mouse::getPosition();
    if (dark_mode)this->window->draw(*background_dark);
    if (!dark_mode)this->window->draw(*background);
    this->window->draw(*logo);
    this->window->draw(my_button->get_en_fr_button());
    this->window->draw(my_button->get_fr_en_button());
    this->window->draw(my_button->get_ro_en_button());
    this->window->draw(my_button->get_en_ro_button());
    this->window->draw(my_button->get_fr_ro_button());
    this->window->draw(my_button->get_ro_fr_button());
    this->window->draw(my_button->get_add_word_fr_ro());
    this->window->draw(my_button->get_add_a_list_of_words());
    this->window->draw(my_button->get_return_button());
    this->window->draw(my_button->get_add_word_ro_button());
    this->window->draw(my_button->get_add_word_button());

    //////////////////////////////Return button from general vocabulary window ////////////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->return_button_clicked(Position))
    {
        show_general_vocabulary_window = false;
        show_general_vocabulary_three = true;
        verbs_vocabular = false;
        adverbs_vocabular = false;
        adjectives_vocabular = false;
        substantives_vocabular = false;
        while (english.size() != 0)english.pop_back();
        while (frensh.size() != 0)frensh.pop_back();
        while (romain.size() != 0)romain.pop_back();
        pause();
    }

    //////////////////////////////Get add word window ///////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && (my_button->add_word_button_clicked(Position) || my_button->add_word_ro_button_clicked(Position) || my_button->add_word_fr_ro_clicked(Position)))
    {
        if (my_button->add_word_button_clicked(Position))add_word_en_fr_bool = true;
        if (my_button->add_word_ro_button_clicked(Position))add_word_en_ro_bool = true;
        if (my_button->add_word_fr_ro_clicked(Position))add_word_fr_ro_bool = true;
        show_general_vocabulary_window = false;
        show_add_word_window = true;
    }

    //////////////////////////////Get general vocabulary active window /////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && (my_button->en_fr_button_clicked(Position) || my_button->fr_en_button_clicked(Position) || my_button->en_ro_button_clicked(Position) || my_button->ro_en_button_clicked(Position) || my_button->fr_ro_button_clicked(Position) || my_button->ro_fr_button_clicked(Position)))
    {
        if (my_button->en_fr_button_clicked(Position))  first_language = "en", second_language = "fr";
        if (my_button->fr_en_button_clicked(Position))  first_language = "fr", second_language = "en";
        if (my_button->en_ro_button_clicked(Position))  first_language = "en", second_language = "ro";
        if (my_button->ro_en_button_clicked(Position))  first_language = "ro", second_language = "en";
        if (my_button->ro_fr_button_clicked(Position))  first_language = "ro", second_language = "fr";
        if (my_button->fr_ro_button_clicked(Position))  first_language = "fr", second_language = "ro";

        if (verbs_vocabular)read_verbs(english, frensh, romain, first_language, second_language);
        if (adverbs_vocabular)read_adverbs(english, frensh, romain, first_language, second_language);
        if (adjectives_vocabular)read_adjectives(english, frensh, romain, first_language, second_language);
        if (substantives_vocabular)read_substantives(english, frensh, romain, first_language, second_language);
        if (first_language == "en" && second_language == "ro")array_size = english.size();
        if (first_language == "en" && second_language == "fr")array_size = english.size();

        if (first_language == "fr" && second_language == "ro")array_size = frensh.size();
        if (first_language == "fr" && second_language == "en")array_size = frensh.size();

        if (first_language == "ro" && second_language == "en")array_size = romain.size();
        if (first_language == "ro" && second_language == "fr")array_size = romain.size();

        read_progression_general_vocabulary(&inputed_word, first_language, second_language, aavs);
        show_general_vocabulary_window = false;
        show_general_vocabulary_active = true;
        prepare_words = true;
        display_finish = false;

    }

    /////////////////////////////Get add a list of words window ////////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->add_a_list_of_words_button_clicked(Position))
    {
        show_general_vocabulary_window = false;
        show_add_a_list_of_words = true;
        pause();
    }

    this->window->display();
}

void mainmenu::f_general_vocabulary_three()
{

    this->window->clear();
    Vector2i Position; Position = Mouse::getPosition();
    if (dark_mode)this->window->draw(*background_dark);
    if (!dark_mode)this->window->draw(*background);

    this->window->draw(*logo);

    this->window->draw(my_button->get_adjectives_button());
    this->window->draw(my_button->get_substantives_button());
    this->window->draw(my_button->get_adverbs_button());
    this->window->draw(my_button->get_verbs_button());

    this->window->draw(my_button->get_return_button());
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->return_button_clicked(Position))
    {
        show_mainmenu = true;
        show_general_vocabulary_three = false;
        once_calculate = true;
        first_choose = false;
        second_choose = false;
        aavs = "";
        first_language = "";
        second_language = "";
        finished = false;
        pause();
    }
    //////////////////////////////Get general vocabulary window substantives /////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->substantives_button_clicked(Position))
    {
        substantives_vocabular = true;
        show_general_vocabulary_window = true;
        show_general_vocabulary_three = false;
        aavs = "substantives";
        pause();
    }

    //////////////////////////////Get general vocabulary window adjectives /////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->adjectives_button_clicked(Position))
    {
        adjectives_vocabular = true;
        show_general_vocabulary_window = true;
        show_general_vocabulary_three = false;
        aavs = "adjectives";
        pause();
    }

    //////////////////////////////Get general vocabulary window adverbs /////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->adverb_button_clicked(Position))
    {
        adverbs_vocabular = true;
        show_general_vocabulary_window = true;
        show_general_vocabulary_three = false;
        aavs = "adverbs";
        pause();
    }

    //////////////////////////////Get general vocabulary window verbs /////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->verbs_button_clicked(Position))
    {
        verbs_vocabular = true;
        show_general_vocabulary_window = true;
        show_general_vocabulary_three = false;
        aavs = "verbs";
        pause();
    }

    this->window->display();

}

void mainmenu::f_general_vocabulary_active()
{
    this->window->clear();
    Vector2i Position; Position = Mouse::getPosition();

    if (dark_mode)this->window->draw(*background_dark);
    if (!dark_mode)this->window->draw(*background);

    ///////////////////////Activate keyboard for general window ///////////////////
    my_keyboard(traduction, &finish_inputed_word);

    ///////////////calculate the progression /////////////////
    progression_float = inputed_word / array_size;

    progression_float *= 100;
    progression_int = progression_float;

    ostringstream progression_str;
    progression_str << progression_int;
    progression.setString(progression_string + progression_str.str() + "%");


    if (first_language == "en" && second_language == "ro" && inputed_word == english.size())progression_int = 100, display_finish = true;
    if (first_language == "en" && second_language == "fr" && inputed_word == english.size())progression_int = 100, display_finish = true;

    if (first_language == "fr" && second_language == "ro" && inputed_word == frensh.size())progression_int = 100, display_finish = true;
    if (first_language == "fr" && second_language == "en" && inputed_word == frensh.size())progression_int = 100, display_finish = true;

    if (first_language == "ro" && second_language == "en" && inputed_word == romain.size())progression_int = 100, display_finish = true;
    if (first_language == "ro" && second_language == "fr" && inputed_word == romain.size())progression_int = 100, display_finish = true;

    /////////////////set String on words/////////////////
    synonyms.setString(synonyms_str);
    translation.setString(traduction);
    word_to_translate.setString(original_str);
    other_traductions.setString(other_traduction_str);


    if (!display_finish)this->window->draw(word_to_translate);
    if (!display_finish)this->window->draw(translation);
    this->window->draw(other_traductions);
    this->window->draw(synonyms);
    this->window->draw(progression);

    if (display_correction)this->window->draw(correction);
    if (display_finish)this->window->draw(finish);


    this->window->draw(my_button->get_help_button());
    this->window->draw(my_button->get_restart_button());
    this->window->draw(my_button->get_return_button());

    //////////////////////////////Return button from general vocabular active window //////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->return_button_clicked(Position))
    {
        save_progression_general_vocabulary(inputed_word, first_language, second_language, aavs);
        show_general_vocabulary_active = false;
        show_general_vocabulary_window = true;
        synonyms_str = "Synonyms : ";
        other_traduction_str = "Other traductions : ";
        inputed_word = 0;
        first_language = "";
        second_language = "";
        display_correction = false;
        finished = false;
        traduction = "";
        correction_str = "";
        translation.setString("");
        correction.setString("");
        while (english.size() != 0)english.pop_back();
        while (frensh.size() != 0)frensh.pop_back();
        while (romain.size() != 0)romain.pop_back();
        finish_inputed_word = 0;
        pause();
    }



    this->window->display();
}

void mainmenu::f_show_irregulars_verbs()
{

    this->window->clear();
    Vector2i Position; Position = Mouse::getPosition();
    if (!dark_mode)this->window->draw(*background);
    if (dark_mode)this->window->draw(*background_dark);

    ///////////////////////Activate keyboard on irregular verbs window ///////////////////////////
    if (!first_verb_inputed)my_keyboard(past_simple, &finish_inputed_verb);
    if (first_verb_inputed)my_keyboard(past_participle, &finish_inputed_verb);

    ///////////////calculate the progression /////////////////
    progression_float = inputed_word / array_size;
    progression_float *= 100;
    progression_int = progression_float;

    ostringstream progression_str;
    progression_str << progression_int;
    progression.setString(progression_string + progression_str.str() + "%");

    past_participle_text_ds.setString(past_participle);
    past_simple_text_ds.setString(past_simple);


    this->window->draw(infinitiv_text);
    this->window->draw(past_simple_text);
    this->window->draw(past_participle_text);

    this->window->draw(infinitiv_text_ds);
    this->window->draw(past_simple_text_ds);
    this->window->draw(past_participle_text_ds);

    this->window->draw(progression);
    if (display_verb_correction_1)this->window->draw(past_simple_correction);
    if (display_verb_correction_2)this->window->draw(past_participle_correction);

    this->window->draw(my_button->get_help2_button());
    this->window->draw(my_button->get_restart_button());
    this->window->draw(my_button->get_return_button());

    //////////////////////////////Return button from irregular verbs window /////////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->return_button_clicked(Position))
    {
        show_mainmenu = true;
        show_irregular_verbs = false;
        save_progression_ir(inputed_word);
        past_participle = "";
        past_simple = "";
        once_dark_light = false;
        past_simple_correction.setString("");
        past_participle_correction.setString("");
        first_verb_inputed = false;
        finish_inputed_verb = 0;
        pause();
    }
    this->window->display();
}

void mainmenu::f_show_general_window()
{
    this->window->clear();
    Vector2i Position; Position = Mouse::getPosition();

    ///////////////////////Activate keyboard for general window ///////////////////
    my_keyboard(traduction, &finish_inputed_word);
    ///////////////calculate the progression /////////////////
    progression_float = inputed_word / array_size;
    progression_float *= 100;
    progression_int = progression_float;

    ostringstream progression_str;
    progression_str << progression_int;
    progression.setString(progression_string + progression_str.str() + "%");
    if (inputed_word == english.size())progression_int = 100, display_finish = true;

    /////////////////set String on words/////////////////
    synonyms.setString(synonyms_str);
    translation.setString(traduction);
    word_to_translate.setString(original_str);
    other_traductions.setString(other_traduction_str);


    if (dark_mode)this->window->draw(*background_dark);
    if (!dark_mode)this->window->draw(*background);
    if (!display_finish)this->window->draw(word_to_translate);
    if (!display_finish)this->window->draw(translation);
    this->window->draw(other_traductions);
    this->window->draw(synonyms);
    this->window->draw(progression);
    this->window->draw(my_button->get_help_button());
    this->window->draw(my_button->get_restart_button());

    if (display_correction)this->window->draw(correction);
    if (display_finish)this->window->draw(finish);

    //////////////////////////////Return button from general window /////////////////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->return_button_clicked(Position))
    {
        levels = 0;
        traduction = "";
        show_mainmenu = true;
        once_calculate = true;
        display_finish = false;
        once_dark_light = false;
        display_correction = false;
        show_general_window = false;
        translation.setString("");
        correction.setString("");
        synonyms_str = "Synonyms : ";
        other_traduction_str = "Other traductions : ";
        while (english.size() != 0)english.pop_back();
        while (frensh.size() != 0)frensh.pop_back();
        while (romain.size() != 0)romain.pop_back();
        save_progression(inputed_word, chapter[chapter_int]);
        finish_inputed_word = 0;
        pause();
    }


    this->window->draw(my_button->get_return_button());
    this->window->display();
}

void mainmenu::f_add_word_window()
{

    this->window->clear();
    Vector2i Position; Position = Mouse::getPosition();
    if (dark_mode)this->window->draw(*background_dark);
    if (!dark_mode)this->window->draw(*background);
    this->window->draw(add_word_logo);
    this->window->draw(first_rectangle);
    this->window->draw(second_rectangle);
    if (!add_word_fr_ro_bool)this->window->draw(en);

    if (add_word_fr_ro_bool)this->window->draw(fr2);
    if (add_word_fr_ro_bool)this->window->draw(ro);

    if (add_word_en_ro_bool)this->window->draw(ro);
    if (add_word_en_fr_bool)this->window->draw(fr);

    //////////////////////////////Return button from add word window ////////////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->return_button_clicked(Position))
    {
        show_add_word_window = false;
        add_word_en_fr_bool = false;
        add_word_en_ro_bool = false;
        add_word_fr_ro_bool = false;
        show_general_vocabulary_window = true;
        first_word = false;
        add_word_number = 0;
        first_language = "";
        second_language = "";
        add_word_fr_str = "";
        add_word_en_str = "";
        add_word_en.setString("");
        add_word_fr.setString("");
        pause();
    }

    this->window->draw(add_word_en);
    this->window->draw(add_word_fr);

    //////////////////add word FR-EN///////////////////////////
    if (!first_word)my_keyboard(add_word_en_str, &finish_inputed_word), add_word_en.setString(add_word_en_str);
    if (first_word)my_keyboard(add_word_fr_str, &finish_inputed_word), add_word_fr.setString(add_word_fr_str);


    this->window->draw(my_button->get_return_button());

    this->window->display();
}

void mainmenu::f_add_a_list_of_words()
{
    this->window->clear();
    Vector2i Position; Position = Mouse::getPosition();
    if (dark_mode)this->window->draw(*background_dark);
    if (!dark_mode)this->window->draw(*background);
    this->window->draw(*logo);

    this->window->draw(my_button->get_add_a_list_of_words_en_fr());
    this->window->draw(my_button->get_add_a_list_of_words_en_ro());
    this->window->draw(my_button->get_add_a_list_of_words_en_fr_ro());
    this->window->draw(my_button->get_add_a_list_of_words_fr_ro());


    this->window->draw(my_button->get_return_button());
    /////////////////////////////Return button from add a list of words window /////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->return_button_clicked(Position))
    {
        show_general_vocabulary_window = true;
        show_add_a_list_of_words = false;
        pause();
    }

    /////////////////////////////Get add a list of words active window ////////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && (my_button->add_a_list_of_words_en_fr_button_clicked(Position) || my_button->add_a_list_of_words_en_ro_button_clicked(Position) || my_button->add_a_list_of_words_en_fr_ro_button_clicked(Position) || my_button->add_a_list_of_words_fr_ro_button_clicked(Position)))
    {
        if (Mouse::isButtonPressed(Mouse::Left) && my_button->add_a_list_of_words_en_fr_button_clicked(Position))add_list_button = 1;
        if (Mouse::isButtonPressed(Mouse::Left) && my_button->add_a_list_of_words_en_ro_button_clicked(Position))add_list_button = 2;
        if (Mouse::isButtonPressed(Mouse::Left) && my_button->add_a_list_of_words_fr_ro_button_clicked(Position))add_list_button = 3;
        if (Mouse::isButtonPressed(Mouse::Left) && my_button->add_a_list_of_words_en_fr_ro_button_clicked(Position))add_list_button = 4;

        show_add_a_list_of_words = false;
        show_add_a_list_of_words_active = true;
        pause();
    }


    this->window->display();
}

void mainmenu::f_add_a_list_of_words_active()
{
    this->window->clear();
    Vector2i Position; Position = Mouse::getPosition();

    if (dark_mode)this->window->draw(*background_dark);
    if (!dark_mode)this->window->draw(*background);

    my_keyboard(add_word_en_str, &finish_inputed_word), words_list.setString(add_word_en_str);


    this->window->draw(add_words_list_rectangle);
    if (finish_inputed_word == 1)this->window->draw(success);



    this->window->draw(words_list);

    this->window->draw(my_button->get_return_button());

    if (Mouse::isButtonPressed(Mouse::Left) || (Mouse::isButtonPressed(Mouse::Right)))wrong_format = false;


    /////////////////////////////Return button from add a list of words active window /////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->return_button_clicked(Position))
    {
        show_add_a_list_of_words = true;
        show_add_a_list_of_words_active = false;
        add_word_en_str = "";
        add_list_button = 0;
        pause();
    }

    this->window->display();
}

void mainmenu::f_instructions()
{
    this->window->clear();

    Vector2i Position; Position = Mouse::getPosition();
    if (dark_mode)this->window->draw(*background_dark);
    if (!dark_mode)this->window->draw(*background);
    if (dark_mode || is_dark)instructions_text_page1.setTexture(instructions_text_page1_dark_texture);
    if (!dark_mode && !is_dark)instructions_text_page1.setTexture(instructions_text_page1_light_texture);

    this->window->draw(my_button->get_return_button());
    this->window->draw(my_button->get_next_button());
    this->window->draw(my_button->get_creator_button());
    this->window->draw(instructions_text_page1);
    //////////////////////////////Return button from instructions or general vocabulary three ////////////////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->return_button_clicked(Position))
    {
        show_mainmenu = true;
        show_instructions = false;
        once_calculate = true;
        pause();
    }

    //////////////////////////////Get second instructions window ////////////////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->next_button_clicked(Position))
    {
        show_instructions_page_2 = true;
        show_instructions = false;
        pause();
    }

    ////////////////////////////Get creator window ////////////////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->creator_button_clicked(Position))
    {
        show_creator_window = true;
        show_instructions = false;
        pause();
    }

    this->window->display();
}

void mainmenu::f_instructions_page2()
{
    this->window->clear();
    Vector2i Position; Position = Mouse::getPosition();
    if (dark_mode)this->window->draw(*background_dark);
    if (!dark_mode)this->window->draw(*background);
    if (dark_mode || is_dark)instructions_text_page2.setTexture(instructions_text_page2_dark_texture);
    if (!dark_mode && !is_dark)instructions_text_page2.setTexture(instructions_text_page2_light_texture);

    this->window->draw(my_button->get_return_button());
    this->window->draw(my_button->get_next_button());


    this->window->draw(instructions_text_page2);

    //////////////////////////////Return from second instructions window ////////////////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->return_button_clicked(Position))
    {
        show_instructions_page_2 = false;
        show_instructions = true;
        pause();
    }

    //////////////////////////////Get third instructions window ////////////////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->next_button_clicked(Position))
    {
        show_instructions_page_3 = true;
        show_instructions_page_2 = false;
        pause();
    }
    this->window->display();
}

void mainmenu::f_instructions_page3()
{
    this->window->clear();
    Vector2i Position; Position = Mouse::getPosition();
    if (dark_mode)this->window->draw(*background_dark);
    if (!dark_mode)this->window->draw(*background);
    if (dark_mode || is_dark)instructions_text_page3.setTexture(instructions_text_page3_dark_texture);
    if (!dark_mode && !is_dark)instructions_text_page3.setTexture(instructions_text_page3_light_texture);

    this->window->draw(my_button->get_return_button());

    this->window->draw(instructions_text_page3);


    //////////////////////////////Return from third instructions window ////////////////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->return_button_clicked(Position))
    {
        show_instructions_page_2 = true;
        show_instructions_page_3 = false;
        pause();
    }

    this->window->display();
}

void mainmenu::f_rewards()
{
    if (once_try)
    {
        if (is_dark || dark_mode)
        {
            level1_r.setFillColor(Color::White);
            level2_r.setFillColor(Color::White);
            level3_r.setFillColor(Color::White);
            level4_r.setFillColor(Color::White);
            level5_r.setFillColor(Color::White);
            level6_r.setFillColor(Color::White);
            level7_r.setFillColor(Color::White);
            level8_r.setFillColor(Color::White);
            level9_r.setFillColor(Color::White);
            level10_r.setFillColor(Color::White);

        }

        if (!is_dark && !dark_mode)
        {
            level1_r.setFillColor(Color::Black);
            level2_r.setFillColor(Color::Black);
            level3_r.setFillColor(Color::Black);
            level4_r.setFillColor(Color::Black);
            level5_r.setFillColor(Color::Black);
            level6_r.setFillColor(Color::Black);
            level7_r.setFillColor(Color::Black);
            level8_r.setFillColor(Color::Black);
            level9_r.setFillColor(Color::Black);
            level10_r.setFillColor(Color::Black);

        }

        read_correct_words(&correct_words);
        read_added_words(&added_words);

        correct_words_string = to_string(correct_words);
        added_words_str = to_string(added_words);

        if (correct_words < 500)level1_r.setString("Get 500 correct words " + correct_words_string + "/500");
        if (correct_words >= 500)level1_r.setString("Get 500 correct words" + space + "500/500"), level1_r.setFillColor(Color::Green);

        if (correct_words < 1000)level2_r.setString("Get 1000 correct words " + correct_words_string + "/1000");
        if (correct_words >= 1000)level2_r.setString("Get 1000 correct words" + space + "1000/1000"), level2_r.setFillColor(Color::Green);

        if (correct_words < 2500 && added_words < 200)level3_r.setString("Get 2500 correct words and add 200 words " + correct_words_string + "/2500  " + added_words_str + "/200");
        if (correct_words >= 2500 && added_words < 200)level3_r.setString("Get 2500 correct words and add 200 words" + space + "2500/2500  " + added_words_str + "/200");
        if (correct_words < 2500 && added_words >= 200)level3_r.setString("Get 2500 correct words and add 200 words " + correct_words_string + "/2500  " + "200/200");
        if (correct_words >= 2500 && added_words >= 200)level3_r.setString("Get 2500 correct words and add 200 words" + space + "2500/2500  200/200"), level3_r.setFillColor(Color::Green);

        if (correct_words < 5000 && added_words < 500)level4_r.setString("Get 5000 correct words and add 500 words " + correct_words_string + "/5000  " + added_words_str + "/500");
        if (correct_words < 5000 && added_words >= 500)level4_r.setString("Get 5000 correct words and add 500 words " + correct_words_string + "/5000  " + "500/500");
        if (correct_words >= 5000 && added_words < 500)level4_r.setString("Get 5000 correct words and add 500 words" + space + "5000/5000  " + added_words_str + "/500");
        if (correct_words >= 5000 && added_words >= 500)level4_r.setString("Get 5000 correct words and add 500 words" + space + "5000/5000   500/500"), level4_r.setFillColor(Color::Green);

        if (correct_words < 8000 && added_words < 1000)level5_r.setString("Get 8000 correct words and add 1000 words " + correct_words_string + "/8000  " + added_words_str + "/1000");
        if (correct_words < 8000 && added_words >= 1000)level5_r.setString("Get 8000 correct words and add 1000 words " + correct_words_string + "/8000  " + "1000/1000");
        if (correct_words >= 8000 && added_words < 1000)level5_r.setString("Get 8000 correct words and add 1000 words" + space + "8000/8000  " + added_words_str + "/1000");
        if (correct_words >= 8000 && added_words >= 1000)level5_r.setString("Get 8000 correct words and add 1000 words" + space + "8000/8000  1000/1000"), level5_r.setFillColor(Color::Green);

        if (correct_words < 15000 && added_words < 3000)level6_r.setString("Get 15000 correct words and add 3000 words " + correct_words_string + "/15000  " + added_words_str + "/3000");
        if (correct_words < 15000 && added_words >= 3000)level6_r.setString("Get 15000 correct words and add 3000 words " + correct_words_string + "/15000  " + "3000/3000");
        if (correct_words >= 15000 && added_words < 3000)level6_r.setString("Get 15000 correct words and add 3000 words" + space + "15000/15000  " + added_words_str + "/3000");
        if (correct_words >= 15000 && added_words >= 3000)level6_r.setString("Get 15000 correct words and add 3000 words" + space + "15000/15000  3000/3000"), level6_r.setFillColor(Color::Green);

        if (correct_words < 25000 && added_words < 4500)level7_r.setString("Get 25000 correct words and add 4500 words " + correct_words_string + "/25000  " + added_words_str + "/4500");
        if (correct_words < 25000 && added_words >= 4500)level7_r.setString("Get 25000 correct words and add 4500 words " + correct_words_string + "/25000  " + "4500/4500");
        if (correct_words >= 25000 && added_words < 4500)level7_r.setString("Get 25000 correct words and add 4500 words" + space + "25000/25000  " + added_words_str + "/4500");
        if (correct_words >= 25000 && added_words >= 4500)level7_r.setString("Get 25000 correct words and add 4500 words" + space + "25000/25000  4500/4500"), level7_r.setFillColor(Color::Green);

        if (correct_words < 40000 && added_words < 7000)level8_r.setString("Get 40000 correct words and add 7000 words " + correct_words_string + "/40000  " + added_words_str + "/7000");
        if (correct_words < 40000 && added_words >= 7000)level8_r.setString("Get 40000 correct words and add 7000 words " + correct_words_string + "/40000  " + "7000/7000");
        if (correct_words >= 40000 && added_words < 7000)level8_r.setString("Get 40000 correct words and add 7000 words" + space + "40000/40000  " + added_words_str + "/7000");
        if (correct_words >= 40000 && added_words >= 7000)level8_r.setString("Get 40000 correct words and add 7000 words" + space + "40000/40000  7000/7000"), level8_r.setFillColor(Color::Green);

        if (correct_words < 75000 && added_words < 10000)level9_r.setString("Get 75000 correct words and add 10000 words " + correct_words_string + "/75000  " + added_words_str + "/10000");
        if (correct_words < 75000 && added_words >= 10000)level9_r.setString("Get 75000 correct words and add 10000 words " + correct_words_string + "/75000  " + "10000/10000");
        if (correct_words >= 75000 && added_words < 10000)level9_r.setString("Get 75000 correct words and add 10000 words" + space + "75000/75000  " + added_words_str + "/10000");
        if (correct_words >= 75000 && added_words >= 10000)level9_r.setString("Get 75000 correct words and add 10000 words" + space + "75000/75000  10000/10000"), level9_r.setFillColor(Color::Green);

        if (correct_words < 100000 && added_words < 15000)level10_r.setString("Get 100000 correct words and add 15000 words " + correct_words_string + "/100000  " + added_words_str + "/15000");
        if (correct_words < 100000 && added_words >= 15000)level10_r.setString("Get 100000 correct words and add 15000 words " + correct_words_string + "/100000  " + "15000/15000");
        if (correct_words >= 100000 && added_words < 15000)level10_r.setString("Get 100000 correct words and add 15000 words" + space + "100000/100000  " + added_words_str + "/15000");
        if (correct_words >= 100000 && added_words >= 15000)level10_r.setString("Get 100000 correct words and add 15000 words" + space + "100000/100000  15000/15000"), level10_r.setFillColor(Color::Green);

        once_try = false;
    }

    this->window->clear();
    Vector2i Position; Position = Mouse::getPosition();
    if (dark_mode)this->window->draw(*background_dark);
    if (!dark_mode)this->window->draw(*background);

    this->window->draw(level1_r);
    this->window->draw(level2_r);
    this->window->draw(level3_r);
    this->window->draw(level4_r);
    this->window->draw(level5_r);
    this->window->draw(level6_r);
    this->window->draw(level7_r);
    this->window->draw(level8_r);
    this->window->draw(level9_r);
    this->window->draw(level10_r);


    this->window->draw(*level1);
    this->window->draw(*level2);
    this->window->draw(*level3);
    this->window->draw(*level4);
    this->window->draw(*level5);
    this->window->draw(*level6);
    this->window->draw(*level7);
    this->window->draw(*level8);
    this->window->draw(*level9);
    this->window->draw(*level10);

    /////////////////////////////Return button from rewards window ///////////////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->return_button_clicked(Position))
    {
        show_rewards_window = false;
        show_mainmenu = true;
        once_try = true;
        pause();
    }

    this->window->draw(my_button->get_return_button());

    this->window->display();
}

void mainmenu::f_creator()
{
    this->window->clear();
    Vector2i Position; Position = Mouse::getPosition();
    if (dark_mode)this->window->draw(*background_dark);
    if (!dark_mode)this->window->draw(*background);

    this->window->draw(my_button->get_return_button());


    this->window->draw(creator_info);

    /////////////////////////////Return from creator window //////////////////////////////////
    if (Mouse::isButtonPressed(Mouse::Left) && my_button->return_button_clicked(Position))
    {
        show_creator_window = false;
        show_instructions = true;
        pause();
    }

    this->window->display();
}

void mainmenu::set_full_screen()
{
    if (full_screen)
    {
        delete this->window;
        sf::Image icon;
        this->window = new RenderWindow(VideoMode(horizontal, vertical), "English Learn", Style::Fullscreen);
        icon.loadFromFile("icons/icon.png");
        this->window->setFramerateLimit(100);
        this->window->setIcon(256, 256, icon.getPixelsPtr());

    }
}

void mainmenu::set_default_screen()
{
    if (!full_screen)
    {
        delete this->window;
        sf::Image icon;
        this->window = new RenderWindow(VideoMode(horizontal, vertical), "English Learn", Style::Default);
        icon.loadFromFile("icons/icon.png");
        this->window->setFramerateLimit(100);
        this->window->setIcon(256, 256, icon.getPixelsPtr());

    }

}

void mainmenu::update()
{
    this->events();
}

void mainmenu::events()
{

    while (this->window->pollEvent(this->event))
    {
        if (this->event.type == sf::Event::Closed)

            this->window->close();
    }
}


