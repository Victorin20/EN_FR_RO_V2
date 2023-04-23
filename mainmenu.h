#pragma once
#include "librarys.h"
#include "button.h"
#include "mainmenu.h"



class mainmenu
{

public:

	mainmenu();
	~mainmenu();

	void run_window();

	void events();

	void update();

	void f_show_mainmenu();

	void f_show_general_vocabulary_window();

	void f_general_vocabulary_three();

	void f_general_vocabulary_active();

	void f_show_irregulars_verbs();

	void f_show_general_window();

	void f_add_word_window();

	void f_add_a_list_of_words();

	void f_add_a_list_of_words_active();

	void f_instructions();

	void f_instructions_page2();

	void f_instructions_page3();

	void f_rewards();

	void f_creator();

	void set_full_screen();

	void set_default_screen();




private:

	void InitWindow();

	sf::RenderWindow* window;
	sf::Event event;

	////////////////Main menu window
	sf::Texture* background_dark_texture = new sf::Texture;
	sf::Texture* logo_texture = new sf::Texture;
	sf::Texture* status_texture = new sf::Texture;
	sf::Texture* actual_level_texture = new sf::Texture;
	sf::Texture* I_speak_texture = new sf::Texture;
	sf::Texture* I_want_to_learn_texture = new sf::Texture;

	sf::Texture* background_texture1 = new sf::Texture;
	sf::Texture* background_texture2 = new sf::Texture;
	sf::Texture* background_texture3 = new sf::Texture;
	sf::Texture* background_texture4 = new sf::Texture;
	sf::Texture* background_texture5 = new sf::Texture;
	sf::Texture* background_texture6 = new sf::Texture;
	sf::Texture* background_texture7 = new sf::Texture;
	sf::Texture* background_texture8 = new sf::Texture;
	sf::Texture* background_texture9 = new sf::Texture;
	sf::Texture* background_texture10 = new sf::Texture;
	sf::Texture* background_texture11 = new sf::Texture;
	sf::Texture* background_texture12 = new sf::Texture;


	///////////////Rewards window
	sf::Texture level1_texture, level2_texture, level3_texture, level4_texture, level5_texture, level6_texture, level7_texture, level8_texture, level9_texture, level10_texture;

	////////////////Add words window
	sf::Texture add_word_logo_texture, first_rectangle_texture, second_rectangle_texture, add_words_list_rectangle_texture, fr_texture, en_texture, ro_texture, success_texture;

	////////////////Instructions widnow
	sf::Texture creator_info_texture, instructions_text_page1_dark_texture, instructions_text_page2_dark_texture, instructions_text_page3_dark_texture;
	sf::Texture instructions_text_page1_light_texture, instructions_text_page2_light_texture, instructions_text_page3_light_texture;


	////////////////Main menu window
	sf::Sprite* background = new sf::Sprite;
	sf::Sprite* background_dark = new sf::Sprite;
	sf::Sprite* logo = new sf::Sprite;
	sf::Sprite* status = new sf::Sprite;
	sf::Sprite* actual_level = new sf::Sprite;
	sf::Sprite* I_speak = new sf::Sprite;
	sf::Sprite* I_want_to_learn = new sf::Sprite;

	///////////////Rewards window
	sf::Sprite* level1 = new sf::Sprite;
	sf::Sprite* level2 = new sf::Sprite;
	sf::Sprite* level3 = new sf::Sprite;
	sf::Sprite* level4 = new sf::Sprite;
	sf::Sprite* level5 = new sf::Sprite;
	sf::Sprite* level6 = new sf::Sprite;
	sf::Sprite* level7 = new sf::Sprite;
	sf::Sprite* level8 = new sf::Sprite;
	sf::Sprite* level9 = new sf::Sprite;
	sf::Sprite* level10 = new sf::Sprite;

	////////////////Add words window
	sf::Sprite add_word_logo, first_rectangle, second_rectangle, add_words_list_rectangle, fr, fr2, en, ro, success;

	////////////////Instructions widnow
	sf::Sprite creator_info, instructions_text_page1, instructions_text_page2, instructions_text_page3;



	///////////////Iregular verbs
	sf::Text infinitiv_text, past_simple_text, past_participle_text, infinitiv_text_ds, past_simple_text_ds, past_participle_text_ds, past_simple_correction, past_participle_correction;

	/////////////General window , window active and add word
	sf::Text word_to_translate, translation, correction, other_traductions, synonyms, progression, finish, add_word_en, add_word_fr, error_wrong_format;

	//////////////Rewards 
	sf::Text level1_r, level2_r, level3_r, level4_r, level5_r, level6_r, level7_r, level8_r, level9_r, level10_r, words_list, status_text;


	sf::Font font;

	button* my_button;

	int finish_inputed_verb, finish_inputed_word, add_list_button, once_inputed;
	int levels, chapter_int, inputed_word, correct_words, added_words, character_size, add_word_number, progression_int;

	int horizontal, vertical;

	double x, y;

	float array_size, progression_float;


	bool once, once_try, is_dark, dark_mode, once_dark_light, opened, full_screen, display_succes;
	bool add_word_en_fr_bool, add_word_en_ro_bool, add_word_fr_ro_bool, point_found, wrong_format;
	bool show_general_vocabulary_three, show_general_vocabulary_window, show_add_a_list_of_words;
	bool first_word, first_choose, second_choose, prepare_verbs, prepare_words, finished, once_calculate;
	bool adverbs_vocabular, verbs_vocabular, adjectives_vocabular, substantives_vocabular, first_verb_inputed;
	bool show_add_word_window, show_rewards_window, show_add_a_list_of_words_active, show_general_vocabulary_active;
	bool display_finish, display_correction, display_add_a_synonym, display_verb_correction_1, display_verb_correction_2, display_another_traduction;
	bool show_instructions, show_instructions_page_2, show_instructions_page_3, show_irregular_verbs, show_creator_window, show_general_window, show_mainmenu;


	std::string* chapter = new std::string[8];
	std::string* background_table = new std::string[12];

	std::vector<std::string> english;
	std::vector<std::string> frensh;
	std::vector<std::string> romain;
	std::vector<std::string> infinitiv_v;
	std::vector<std::string> past_simple_v;
	std::vector<std::string> past_participle_v;

	std::string correct_words_string, added_words_str, point;
	std::string slash, traduction, past_simple, correction_str, original_str, add_word_fr_str, add_word_en_str, read_background_str;
	std::string past_participle, synonyms_str, progression_string, other_traduction_str, first_language, second_language, dark_str, space, aavs;

};