#include "button.h"

#pragma warning(disable : 4018)
#pragma warning(disable : 4305)
#pragma warning(disable : 4244)
#pragma warning(disable : 26812)
#pragma warning(disable : 26495)


button::button()
{

	GetDesktopResolution(&horizontal, &vertical);


	x = horizontal / static_cast<double>(1920);
	y = vertical / static_cast<double>(1080);


	button_en_fr_texture->loadFromFile("pictures/en_fr_word.png");
	button_fr_en_texture->loadFromFile("pictures/fr_en_word.png");
	button_ro_en_texture->loadFromFile("pictures/ro_en_word.png");
	button_en_ro_texture->loadFromFile("pictures/en_ro_word.png");
	button_fr_ro_texture->loadFromFile("pictures/fr_ro_word.png");
	button_ro_fr_texture->loadFromFile("pictures/ro_fr_word.png");

	button_en_fr->setTexture(*button_en_fr_texture);
	button_fr_en->setTexture(*button_fr_en_texture);
	button_en_ro->setTexture(*button_en_ro_texture);
	button_ro_en->setTexture(*button_ro_en_texture);
	button_fr_ro->setTexture(*button_fr_ro_texture);
	button_ro_fr->setTexture(*button_ro_fr_texture);

	button_fr_en->setPosition(460 * x, 300 * y);
	button_ro_en->setPosition(460 * x, 450 * y);
	button_en_fr->setPosition(1060 * x, 300 * y);
	button_en_ro->setPosition(1060 * x, 450 * y);
	button_fr_ro->setPosition(1060 * x, 600 * y);
	button_ro_fr->setPosition(460 * x, 600 * y);

	button_fr_en->setScale(x, y);
	button_ro_en->setScale(x, y);
	button_en_fr->setScale(x, y);
	button_en_ro->setScale(x, y);
	button_fr_ro->setScale(x, y);
	button_ro_fr->setScale(x, y);



	add_word_en_ro_texture->loadFromFile("pictures/add_word_en_ro.png");
	add_word_en_fr_texture->loadFromFile("pictures/add_word_en_fr.png");
	add_word_fr_ro_texture->loadFromFile("pictures/add_word_fr_ro.png");

	add_word_en_fr->setTexture(*add_word_en_fr_texture);
	add_word_en_ro->setTexture(*add_word_en_ro_texture);
	add_word_fr_ro->setTexture(*add_word_fr_ro_texture);

	add_word_en_fr->setPosition(460 * x, 750 * y);
	add_word_en_ro->setPosition(1060 * x, 750 * y);
	add_word_fr_ro->setPosition(460 * x, 900 * y);

	add_word_en_fr->setScale(x, y);
	add_word_en_ro->setScale(x, y);
	add_word_fr_ro->setScale(x, y);


	add_a_list_of_words_texture->loadFromFile("pictures/add_a_list_of_words.png");
	add_a_list_of_words_en_fr_texture->loadFromFile("pictures/add_a_list_of_words_en_fr.png");
	add_a_list_of_words_en_ro_texture->loadFromFile("pictures/add_a_list_of_words_en_ro.png");
	add_a_list_of_words_fr_ro_texture->loadFromFile("pictures/add_a_list_of_words_fr_ro.png");
	add_a_list_of_words_en_fr_ro_texture->loadFromFile("pictures/add_a_list_of_words_en_fr_ro.png");

	add_a_list_of_words->setTexture(*add_a_list_of_words_texture);
	add_a_list_of_words_en_fr->setTexture(*add_a_list_of_words_en_fr_texture);
	add_a_list_of_words_en_ro->setTexture(*add_a_list_of_words_en_ro_texture);
	add_a_list_of_words_fr_ro->setTexture(*add_a_list_of_words_fr_ro_texture);
	add_a_list_of_words_en_fr_ro->setTexture(*add_a_list_of_words_en_fr_ro_texture);

	add_a_list_of_words->setPosition(1060 * x, 900 * y);
	add_a_list_of_words_en_fr->setPosition(460 * x, 450 * y);
	add_a_list_of_words_en_ro->setPosition(460 * x, 600 * y);
	add_a_list_of_words_fr_ro->setPosition(1060 * x, 450 * y);
	add_a_list_of_words_en_fr_ro->setPosition(1060 * x, 600 * y);

	add_a_list_of_words->setScale(x, y);
	add_a_list_of_words_en_fr->setScale(x, y);
	add_a_list_of_words_en_ro->setScale(x, y);
	add_a_list_of_words_fr_ro->setScale(x, y);
	add_a_list_of_words_en_fr_ro->setScale(x, y);


	verbs_texture->loadFromFile("pictures/verbs.png");
	adverbs_texture->loadFromFile("pictures/adverbs.png");
	adjectives_texture->loadFromFile("pictures/adjectives.png");
	substantives_texture->loadFromFile("pictures/substantives.png");

	verbs->setTexture(*verbs_texture);
	adverbs->setTexture(*adverbs_texture);
	adjectives->setTexture(*adjectives_texture);
	substantives->setTexture(*substantives_texture);

	verbs->setPosition(460 * x, 450 * y);
	adverbs->setPosition(1060 * x, 450 * y);
	adjectives->setPosition(1060 * x, 600 * y);
	substantives->setPosition(460 * x, 600 * y);

	verbs->setScale(x, y);
	adverbs->setScale(x, y);
	adjectives->setScale(x, y);
	substantives->setScale(x, y);


	argue_texture->loadFromFile("pictures/argue.png");
	object_texture->loadFromFile("pictures/objects.png");
	describe_texture->loadFromFile("pictures/describe.png");
	communication_texture->loadFromFile("pictures/communication.png");
	behave_in_society_texture->loadFromFile("pictures/behave_in_sosiety.png");
	set_in_time_and_place_texture->loadFromFile("pictures/set_you_in_time.png");
	talk_about_your_life_texture->loadFromFile("pictures/talk_about_your_life.png");
	express_your_feelings_texture->loadFromFile("pictures/express_your_feelings.png");

	argue->setTexture(*argue_texture);
	object->setTexture(*object_texture);
	describe->setTexture(*describe_texture);
	communication->setTexture(*communication_texture);
	behave_in_society->setTexture(*behave_in_society_texture);
	talk_about_your_life->setTexture(*talk_about_your_life_texture);
	express_your_feelings->setTexture(*express_your_feelings_texture);
	set_in_time_and_place->setTexture(*set_in_time_and_place_texture);

	argue->setPosition(1010 * x, 570 * y);
	object->setPosition(210 * x, 570 * y);
	describe->setPosition(610 * x, 350 * y);
	communication->setPosition(210 * x, 350 * y);
	behave_in_society->setPosition(1410 * x, 570 * y);
	set_in_time_and_place->setPosition(610 * x, 570 * y);
	talk_about_your_life->setPosition(1010 * x, 350 * y);
	express_your_feelings->setPosition(1410 * x, 350 * y);

	argue->setScale(x, y);
	object->setScale(x, y);
	describe->setScale(x, y);
	communication->setScale(x, y);
	behave_in_society->setScale(x, y);
	set_in_time_and_place->setScale(x, y);
	talk_about_your_life->setScale(x, y);
	express_your_feelings->setScale(x, y);


	help_texture->loadFromFile("pictures/help.png");
	next_texture->loadFromFile("pictures/next.png");
	creator_texture->loadFromFile("pictures/creator.png");
	restart_texture->loadFromFile("pictures/restart.png");
	return_button_texture->loadFromFile("pictures/return.png");

	help->setTexture(*help_texture);
	next->setTexture(*next_texture);
	help2->setTexture(*help_texture);
	restart->setTexture(*restart_texture);
	creator->setTexture(*creator_texture);
	return_button->setTexture(*return_button_texture);

	help->setPosition(1350 * x, 0);
	help2->setPosition(1750 * x, 70 * y);
	return_button->setPosition(0, 0);
	next->setPosition(1750 * x, 10 * y);
	creator->setPosition(1590 * x, 10 * y);
	restart->setPosition(1710 * x, 970 * y);

	help->setScale(x, y);
	help2->setScale(x, y);
	return_button->setScale(x, y);
	next->setScale(x, y);
	creator->setScale(x, y);
	restart->setScale(x, y);



	fr_texture->loadFromFile("pictures/fr.png");
	en_texture->loadFromFile("pictures/en.png");
	ro_texture->loadFromFile("pictures/ro.png");

	ro->setTexture(*ro_texture);
	en->setTexture(*en_texture);
	fr->setTexture(*fr_texture);

	ro->setPosition(547 * x, 740 * y);
	fr->setPosition(834 * x, 740 * y);
	en->setPosition(1121 * x, 740 * y);

	ro->setScale(x, y);
	fr->setScale(x, y);
	en->setScale(x, y);


	exit_texture->loadFromFile("pictures/exit.png");
	dark_button_texture->loadFromFile("pictures/dark.png");
	rewards_texture->loadFromFile("pictures/rewards.png");
	light_button_texture->loadFromFile("pictures/light.png");
	instructions_texture->loadFromFile("pictures/instructions.png");
	change_background_texture->loadFromFile("pictures/change_background.png");
	irregulars_verbs_texture->loadFromFile("pictures/irregular_verbs.png");
	general_vocabular_texture->loadFromFile("pictures/general_vocabulary.png");

	exit->setTexture(*exit_texture);
	rewards->setTexture(*rewards_texture);
	dark_button->setTexture(*dark_button_texture);
	light_button->setTexture(*light_button_texture);
	instructions->setTexture(*instructions_texture);
	irregulars_verbs->setTexture(*irregulars_verbs_texture);
	change_background->setTexture(*change_background_texture);
	general_vocabular->setTexture(*general_vocabular_texture);

	exit->setPosition(1750 * x, 80 * y);
	instructions->setPosition(10 * x, 10 * y);
	rewards->setPosition(220 * x, 10 * y);
	dark_button->setPosition(1665 * x, 80 * y);
	light_button->setPosition(1665 * x, 10 * y);
	irregulars_verbs->setPosition(1410 * x, 790 * y);
	general_vocabular->setPosition(210 * x, 790 * y);
	change_background->setPosition(1750 * x, 10 * y);

	exit->setScale(x, y);
	instructions->setScale(x, y);
	rewards->setScale(x, y);
	dark_button->setScale(x, y);
	light_button->setScale(x, y);
	irregulars_verbs->setScale(x, y);
	general_vocabular->setScale(x, y);
	change_background->setScale(x, y);
}

button::~button()
{



	delete this->ro_texture;
	delete this->en_texture;
	delete this->fr_texture;
	delete this->exit_texture;
	delete this->argue_texture;
	delete this->object_texture;
	delete this->describe_texture;
	delete this->dark_button_texture;
	delete this->light_button_texture;
	delete this->instructions_texture;
	delete this->return_button_texture;
	delete this->communication_texture;
	delete this->irregulars_verbs_texture;
	delete this->change_background_texture;
	delete this->behave_in_society_texture;
	delete this->general_vocabular_texture;
	delete this->talk_about_your_life_texture;
	delete this->express_your_feelings_texture;
	delete this->set_in_time_and_place_texture;

	delete this->next_texture;
	delete this->help_texture;
	delete this->verbs_texture;
	delete this->help2_texture;
	delete this->adverbs_texture;
	delete this->restart_texture;
	delete this->rewards_texture;
	delete this->creator_texture;
	delete this->adjectives_texture;
	delete this->button_en_fr_texture;
	delete this->button_fr_en_texture;
	delete this->button_ro_en_texture;
	delete this->button_en_ro_texture;
	delete this->button_fr_ro_texture;
	delete this->substantives_texture;
	delete this->button_ro_fr_texture;
	delete this->add_a_synonym_texture;
	delete this->add_word_en_ro_texture;
	delete this->add_word_en_fr_texture;
	delete this->add_word_fr_ro_texture;
	delete this->another_traduction_texture;
	delete this->add_a_list_of_words_texture;
	delete this->add_a_list_of_words_en_fr_texture;
	delete this->add_a_list_of_words_en_ro_texture;
	delete this->add_a_list_of_words_fr_ro_texture;
	delete this->add_a_list_of_words_en_fr_ro_texture;



	delete this->help;
	delete this->help2;
	delete this->next;
	delete this->verbs;
	delete this->restart;
	delete this->rewards;
	delete this->creator;
	delete this->adverbs;
	delete this->adjectives;
	delete this->substantives;
	delete this->button_en_fr;
	delete this->button_fr_en;
	delete this->button_ro_en;
	delete this->button_en_ro;
	delete this->button_fr_ro;
	delete this->button_ro_fr;
	delete this->add_word_fr_ro;
	delete this->add_word_en_ro;
	delete this->add_word_en_fr;
	delete this->add_a_list_of_words;
	delete this->add_a_list_of_words_en_fr;
	delete this->add_a_list_of_words_en_ro;
	delete this->add_a_list_of_words_fr_ro;
	delete this->add_a_list_of_words_en_fr_ro;





	delete this->ro;
	delete this->en;
	delete this->fr;
	delete this->argue;
	delete this->object;
	delete this->describe;
	delete this->communication;
	delete this->irregulars_verbs;
	delete this->behave_in_society;
	delete this->general_vocabular;
	delete this->talk_about_your_life;
	delete this->express_your_feelings;
	delete this->set_in_time_and_place;




	delete this->exit;
	delete this->return_button;
	delete this->dark_button;
	delete this->light_button;
	delete this->instructions;
	delete this->change_background;
}

#pragma region Sprite
sf::Sprite button::get_en_fr_button() const
{
	return *button_en_fr;
}

sf::Sprite button::get_fr_en_button() const
{
	return *button_fr_en;
}

sf::Sprite button::get_return_button() const
{
	return *return_button;
}

sf::Sprite button::get_next_button() const
{
	return *next;
}

sf::Sprite button::get_add_word_button() const
{
	return *add_word_en_fr;
}

sf::Sprite button::get_dark_button() const
{
	return *dark_button;
}

sf::Sprite button::get_light_button() const
{
	return *light_button;
}

sf::Sprite button::get_instructions_button() const
{
	return *instructions;
}

sf::Sprite button::get_change_background_button() const
{
	return *change_background;
}

sf::Sprite button::get_add_word_ro_button() const
{
	return *add_word_en_ro;
}

sf::Sprite button::get_substantives_button() const
{
	return *substantives;
}

sf::Sprite button::get_ro_en_button() const
{
	return *button_ro_en;
}

sf::Sprite button::get_fr_ro_button() const
{
	return *button_fr_ro;
}

sf::Sprite button::get_ro_fr_button() const
{
	return *button_ro_fr;
}

sf::Sprite button::get_add_word_fr_ro() const
{
	return *add_word_fr_ro;
}

sf::Sprite button::get_en_ro_button() const
{
	return *button_en_ro;
}

sf::Sprite button::get_en_button() const
{
	return *en;
}

sf::Sprite button::get_fr_button() const
{
	return *fr;
}

sf::Sprite button::get_ro_button() const
{
	return *ro;
}

sf::Sprite button::get_verbs_button() const
{
	return *verbs;
}

sf::Sprite button::get_help_button() const
{
	return *help;
}

sf::Sprite button::get_help2_button() const
{
	return *help2;
}

sf::Sprite button::get_argue_button() const
{
	return *argue;
}

sf::Sprite button::get_adverbs_button() const
{
	return *adverbs;
}

sf::Sprite button::get_rewards_button() const
{
	return *rewards;
}

sf::Sprite button::get_behave_button() const
{
	return *behave_in_society;
}

sf::Sprite button::get_restart_button() const
{
	return *restart;
}

sf::Sprite button::get_creator_button() const
{
	return *creator;
}

sf::Sprite button::get_describe_button() const
{
	return *describe;
}

sf::Sprite button::get_adjectives_button() const
{
	return *adjectives;
}

sf::Sprite button::get_general_vocabulary_button() const
{
	return *general_vocabular;
}

sf::Sprite button::get_exit_button() const
{
	return *exit;
}

sf::Sprite button::get_irregulars_verbs_button() const
{
	return *irregulars_verbs;
}

sf::Sprite button::get_express_feelings_button() const
{
	return *express_your_feelings;
}

sf::Sprite button::get_talk_about_you_button() const
{
	return *talk_about_your_life;
}

sf::Sprite button::get_objects_button() const
{
	return *object;
}

sf::Sprite button::get_set_in_time_button() const
{
	return *set_in_time_and_place;
}

sf::Sprite button::get_communication_button() const
{
	return *communication;
}

sf::Sprite button::get_add_a_list_of_words() const
{
	return *add_a_list_of_words;
}

sf::Sprite button::get_add_a_list_of_words_en_fr() const
{
	return *add_a_list_of_words_en_fr;
}

sf::Sprite button::get_add_a_list_of_words_en_ro() const
{
	return *add_a_list_of_words_en_ro;
}

sf::Sprite button::get_add_a_list_of_words_en_fr_ro() const
{
	return *add_a_list_of_words_en_fr_ro;
}

sf::Sprite button::get_add_a_list_of_words_fr_ro() const
{
	return *add_a_list_of_words_fr_ro;
}
#pragma endregion Sprite

#pragma region bool
bool button::en_fr_button_clicked(sf::Vector2i Position)const
{
	return ((Position.x > 1060 * x && Position.x < 1460 * x) && (Position.y > 300 * y && Position.y < 400 * y));
}

bool button::fr_ro_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 1060 * x && Position.x < 1460 * x) && (Position.y > 600 * y && Position.y < 700 * y));
}

bool button::fr_en_button_clicked(sf::Vector2i Position)const
{
	return ((Position.x > 460 * x && Position.x < 860 * x) && (Position.y > 300 * y && Position.y < 400 * y));
}

bool button::ro_en_button_clicked(sf::Vector2i Position)const
{
	return ((Position.x > 460 * x && Position.x < 860 * x) && (Position.y > 450 * y && Position.y < 550 * y));
}

bool button::en_ro_button_clicked(sf::Vector2i Position)const
{
	return ((Position.x > 1060 * x && Position.x < 1460 * x) && (Position.y > 450 * y && Position.y < 550 * y));
}

bool button::ro_fr_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 460 * x && Position.x < 860 * x) && (Position.y > 600 * y && Position.y < 700 * y));
}

bool button::next_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 1750 * x && Position.x < 1900 * x) && (Position.y > 10 * y && Position.y < 70 * y));
}

bool button::add_word_button_clicked(sf::Vector2i Position)const
{
	return ((Position.x > 460 * x && Position.x < 860 * x) && (Position.y > 750 * y && Position.y < 850 * y));
}

bool button::add_word_ro_button_clicked(sf::Vector2i Position)const
{
	return ((Position.x > 1060 * x && Position.x < 1460 * x) && (Position.y > 750 * y && Position.y < 850 * y));
}

bool button::add_word_fr_ro_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 460 * x && Position.x < 860 * x) && (Position.y > 900 * y && Position.y < 1000 * y));
}

bool button::verbs_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 460 * x && Position.x < 860 * x) && (Position.y > 450 * y && Position.y < 550 * y));
}

bool button::adverb_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 1060 * x && Position.x < 1460 * x) && (Position.y > 450 * y && Position.y < 550 * y));
}

bool button::rewards_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 220 * x && Position.x < 440 * x) && (Position.y > 10 * y && Position.y < 110 * y));
}

bool button::adjectives_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 1060 * x && Position.x < 1460 * x) && (Position.y > 600 * y && Position.y < 700 * y));
}

bool button::substantives_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 460 * x && Position.x < 860 * x) && (Position.y > 600 * y && Position.y < 700 * y));
}

bool button::return_button_clicked(sf::Vector2i Position)const
{
	return ((Position.x > 0 && Position.x < 90 * x) && (Position.y > 0 && Position.y < 90 * y));
}

bool button::light_button_clicked(sf::Vector2i Position)const
{
	return ((Position.x > 1665 * x && Position.x < 1745 * x) && (Position.y > 10 * y && Position.y < 70 * y));
}

bool button::dark_button_clicked(sf::Vector2i Position)const
{
	return ((Position.x > 1665 * x && Position.x < 1745 * x) && (Position.y > 80 * y && Position.y < 140 * y));
}

bool button::change_background_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 1750 * x && Position.x < 1910 * x) && (Position.y > 10 * y && Position.y < 70 * y));
}

bool button::exit_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 1750 * x && Position.x < 1910 * x) && (Position.y > 80 * y && Position.y < 140 * y));
}

bool button::restart_button_cliked(sf::Vector2i Position) const
{
	return ((Position.x > 1710 * x && Position.x < 1910 * x) && (Position.y > 970 * y && Position.y < 1070 * y));
}

bool button::help_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 1350 * x && Position.x < 1470 * x) && (Position.y > 0 && Position.y < 100 * y));
}

bool button::help2_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 1750 * x && Position.x < 1870 * x) && (Position.y > 70 * y && Position.y < 170 * y));
}

bool button::instructions_button_clicked(sf::Vector2i Position)const
{
	return ((Position.x > 10 * x && Position.x < 210 * x) && (Position.y > 10 * y && Position.y < 110 * y));
}

bool button::general_vocabulary_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 210 * x && Position.x < 510 * x) && (Position.y > 790 * y && Position.y < 910 * y));
}

bool button::add_a_list_of_words_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 1060 * x && Position.x < 1460 * x) && (Position.y > 900 * y && Position.y < 1000 * y));
}

bool button::add_a_list_of_words_en_fr_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 460 * x && Position.x < 860 * x) && (Position.y > 450 * y && Position.y < 550 * y));
}

bool button::add_a_list_of_words_en_ro_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 460 * x && Position.x < 860 * x) && (Position.y > 600 * y && Position.y < 700 * y));
}

bool button::add_a_list_of_words_en_fr_ro_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 1060 * x && Position.x < 1460 * x) && (Position.y > 600 * y && Position.y < 700 * y));
}

bool button::add_a_list_of_words_fr_ro_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 1060 * x && Position.x < 1460 * x) && (Position.y > 450 * y && Position.y < 550 * y));
}

bool button::irregulars_verbs_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 1410 * x && Position.x < 1710 * x) && (Position.y > 790 * y && Position.y < 910 * y));
}

bool button::communication_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 210 * x && Position.x < 510 * x) && (Position.y > 350 * y && Position.y < 470 * y));
}

bool button::describe_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 610 * x && Position.x < 910 * x) && (Position.y > 350 * y && Position.y < 470 * y));
}

bool button::argue_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 1010 * x && Position.x < 1310 * x) && (Position.y > 570 * y && Position.y < 690 * y));
}

bool button::creator_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 1590 * x && Position.x < 1740 * x) && (Position.y > 10 * y && Position.y < 70 * y));
}

bool button::behave_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 1410 * x && Position.x < 1710 * x) && (Position.y > 570 * y && Position.y < 690 * y));
}

bool button::express_feelings_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 1410 * x && Position.x < 1710 * x) && (Position.y > 350 * y && Position.y < 470 * y));
}

bool button::talk_about_you_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 1010 * x && Position.x < 1310 * x) && (Position.y > 350 * y && Position.y < 470 * y));
}

bool button::objects_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 210 * x && Position.x < 510 * x) && (Position.y > 570 * y && Position.y < 690 * y));
}

bool button::set_in_time_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 610 * x && Position.x < 910 * x) && (Position.y > 570 * y && Position.y < 690 * y));
}

bool button::ro_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 547 * x && Position.x < 797 * x) && (Position.y > 740 * y && Position.y < 940 * y));
}

bool button::en_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 1121 * x && Position.x < 1346 * x) && (Position.y > 740 * y && Position.y < 940 * y));
}

bool button::fr_button_clicked(sf::Vector2i Position) const
{
	return ((Position.x > 834 * x && Position.x < 1084 * x) && (Position.y > 740 * y && Position.y < 940 * y));
}
#pragma endregion bool