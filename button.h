#pragma once
#include "functions.h"


#pragma warning(disable : 4018)
#pragma warning(disable : 4305)
#pragma warning(disable : 4244)
#pragma warning(disable : 26812)
#pragma warning(disable : 26495)

class button
{

public:

	button();
	~button();

	sf::Sprite get_dark_button()const;
	sf::Sprite get_en_fr_button()const;
	sf::Sprite get_fr_en_button()const;
	sf::Sprite get_ro_en_button()const;
	sf::Sprite get_fr_ro_button()const;
	sf::Sprite get_ro_fr_button()const;
	sf::Sprite get_en_ro_button()const;
	sf::Sprite get_light_button()const;
	sf::Sprite get_return_button()const;
	sf::Sprite get_next_button()const;
	sf::Sprite get_add_word_fr_ro()const;
	sf::Sprite get_add_word_button()const;
	sf::Sprite get_add_word_ro_button()const;
	sf::Sprite get_instructions_button()const;
	sf::Sprite get_change_background_button()const;


	bool dark_button_clicked(sf::Vector2i Position)const;
	bool en_fr_button_clicked(sf::Vector2i Position)const;
	bool fr_en_button_clicked(sf::Vector2i Position)const;
	bool ro_en_button_clicked(sf::Vector2i Position)const;
	bool en_ro_button_clicked(sf::Vector2i Position)const;
	bool light_button_clicked(sf::Vector2i Position)const;
	bool ro_fr_button_clicked(sf::Vector2i Position)const;
	bool next_button_clicked(sf::Vector2i Position)const;
	bool fr_ro_button_clicked(sf::Vector2i Position)const;
	bool return_button_clicked(sf::Vector2i Position)const;
	bool add_word_fr_ro_clicked(sf::Vector2i Position)const;
	bool add_word_button_clicked(sf::Vector2i Position)const;
	bool add_word_ro_button_clicked(sf::Vector2i Position)const;
	bool instructions_button_clicked(sf::Vector2i Position)const;
	bool change_background_button_clicked(sf::Vector2i Position)const;


	sf::Sprite get_en_button()const;
	sf::Sprite get_fr_button()const;
	sf::Sprite get_ro_button()const;
	sf::Sprite get_help_button()const;
	sf::Sprite get_help2_button()const;
	sf::Sprite get_exit_button()const;
	sf::Sprite get_verbs_button()const;
	sf::Sprite get_argue_button()const;
	sf::Sprite get_behave_button()const;
	sf::Sprite get_adverbs_button()const;
	sf::Sprite get_rewards_button()const;
	sf::Sprite get_restart_button()const;
	sf::Sprite get_creator_button()const;
	sf::Sprite get_objects_button()const;
	sf::Sprite get_describe_button()const;
	sf::Sprite get_adjectives_button()const;
	sf::Sprite get_set_in_time_button()const;
	sf::Sprite get_substantives_button()const;
	sf::Sprite get_communication_button()const;
	sf::Sprite get_talk_about_you_button()const;
	sf::Sprite get_express_feelings_button()const;
	sf::Sprite get_irregulars_verbs_button()const;
	sf::Sprite get_general_vocabulary_button()const;

	bool ro_button_clicked(sf::Vector2i Position)const;
	bool en_button_clicked(sf::Vector2i Position)const;
	bool fr_button_clicked(sf::Vector2i Position)const;
	bool help_button_clicked(sf::Vector2i Position)const;
	bool help2_button_clicked(sf::Vector2i Position)const;
	bool exit_button_clicked(sf::Vector2i Position)const;
	bool verbs_button_clicked(sf::Vector2i Position)const;
	bool argue_button_clicked(sf::Vector2i Position)const;
	bool creator_button_clicked(sf::Vector2i Position)const;
	bool behave_button_clicked(sf::Vector2i Position)const;
	bool restart_button_cliked(sf::Vector2i Position)const;
	bool adverb_button_clicked(sf::Vector2i Position)const;
	bool rewards_button_clicked(sf::Vector2i Position)const;
	bool objects_button_clicked(sf::Vector2i Position)const;
	bool describe_button_clicked(sf::Vector2i Position)const;
	bool adjectives_button_clicked(sf::Vector2i Position)const;
	bool set_in_time_button_clicked(sf::Vector2i Position)const;
	bool substantives_button_clicked(sf::Vector2i Position)const;
	bool communication_button_clicked(sf::Vector2i Position)const;
	bool talk_about_you_button_clicked(sf::Vector2i Position)const;
	bool irregulars_verbs_button_clicked(sf::Vector2i Position)const;
	bool express_feelings_button_clicked(sf::Vector2i Position)const;
	bool general_vocabulary_button_clicked(sf::Vector2i Position)const;



	sf::Sprite get_add_a_list_of_words()const;
	sf::Sprite get_add_a_list_of_words_en_fr()const;
	sf::Sprite get_add_a_list_of_words_en_ro()const;
	sf::Sprite get_add_a_list_of_words_fr_ro()const;
	sf::Sprite get_add_a_list_of_words_en_fr_ro()const;


	bool add_a_list_of_words_button_clicked(sf::Vector2i Position)const;
	bool add_a_list_of_words_en_fr_button_clicked(sf::Vector2i Position)const;
	bool add_a_list_of_words_en_ro_button_clicked(sf::Vector2i Position)const;
	bool add_a_list_of_words_fr_ro_button_clicked(sf::Vector2i Position)const;
	bool add_a_list_of_words_en_fr_ro_button_clicked(sf::Vector2i Position)const;


private:

	double x, y;
	int horizontal, vertical;


	/////////////////////////////general vocabulary //////////////////////////////////////////
	sf::Texture* next_texture = new sf::Texture;
	sf::Texture* help_texture = new sf::Texture;
	sf::Texture* verbs_texture = new sf::Texture;
	sf::Texture* help2_texture = new sf::Texture;
	sf::Texture* adverbs_texture = new sf::Texture;
	sf::Texture* restart_texture = new sf::Texture;
	sf::Texture* rewards_texture = new sf::Texture;
	sf::Texture* creator_texture = new sf::Texture;
	sf::Texture* adjectives_texture = new sf::Texture;
	sf::Texture* button_en_fr_texture = new sf::Texture;
	sf::Texture* button_fr_en_texture = new sf::Texture;
	sf::Texture* button_ro_en_texture = new sf::Texture;
	sf::Texture* button_en_ro_texture = new sf::Texture;
	sf::Texture* button_fr_ro_texture = new sf::Texture;
	sf::Texture* substantives_texture = new sf::Texture;
	sf::Texture* button_ro_fr_texture = new sf::Texture;
	sf::Texture* add_a_synonym_texture = new sf::Texture;
	sf::Texture* add_word_en_ro_texture = new sf::Texture;
	sf::Texture* add_word_en_fr_texture = new sf::Texture;
	sf::Texture* add_word_fr_ro_texture = new sf::Texture;
	sf::Texture* another_traduction_texture = new sf::Texture;
	sf::Texture* add_a_list_of_words_texture = new sf::Texture;
	sf::Texture* add_a_list_of_words_en_fr_texture = new sf::Texture;
	sf::Texture* add_a_list_of_words_en_ro_texture = new sf::Texture;
	sf::Texture* add_a_list_of_words_fr_ro_texture = new sf::Texture;
	sf::Texture* add_a_list_of_words_en_fr_ro_texture = new sf::Texture;


	sf::Sprite* help = new sf::Sprite;
	sf::Sprite* next = new sf::Sprite;
	sf::Sprite* help2 = new sf::Sprite;
	sf::Sprite* verbs = new sf::Sprite;
	sf::Sprite* restart = new sf::Sprite;
	sf::Sprite* rewards = new sf::Sprite;
	sf::Sprite* creator = new sf::Sprite;
	sf::Sprite* adverbs = new sf::Sprite;
	sf::Sprite* adjectives = new sf::Sprite;
	sf::Sprite* button_en_fr = new sf::Sprite;
	sf::Sprite* button_fr_en = new sf::Sprite;
	sf::Sprite* button_ro_en = new sf::Sprite;
	sf::Sprite* button_en_ro = new sf::Sprite;
	sf::Sprite* button_fr_ro = new sf::Sprite;
	sf::Sprite* button_ro_fr = new sf::Sprite;
	sf::Sprite* substantives = new sf::Sprite;
	sf::Sprite* add_word_fr_ro = new sf::Sprite;
	sf::Sprite* add_word_en_fr = new sf::Sprite;
	sf::Sprite* add_word_en_ro = new sf::Sprite;
	sf::Sprite* add_a_list_of_words = new sf::Sprite;
	sf::Sprite* add_a_list_of_words_en_fr = new sf::Sprite;
	sf::Sprite* add_a_list_of_words_en_ro = new sf::Sprite;
	sf::Sprite* add_a_list_of_words_fr_ro = new sf::Sprite;
	sf::Sprite* add_a_list_of_words_en_fr_ro = new sf::Sprite;

	//////////////////////////////////main menu buttons/////////////////////////////////////
	sf::Texture* ro_texture = new sf::Texture;
	sf::Texture* en_texture = new sf::Texture;
	sf::Texture* fr_texture = new sf::Texture;
	sf::Texture* exit_texture = new sf::Texture;
	sf::Texture* argue_texture = new sf::Texture;
	sf::Texture* object_texture = new sf::Texture;
	sf::Texture* describe_texture = new sf::Texture;
	sf::Texture* dark_button_texture = new sf::Texture;
	sf::Texture* light_button_texture = new sf::Texture;
	sf::Texture* instructions_texture = new sf::Texture;
	sf::Texture* return_button_texture = new sf::Texture;
	sf::Texture* communication_texture = new sf::Texture;
	sf::Texture* irregulars_verbs_texture = new sf::Texture;
	sf::Texture* change_background_texture = new sf::Texture;
	sf::Texture* behave_in_society_texture = new sf::Texture;
	sf::Texture* general_vocabular_texture = new sf::Texture;
	sf::Texture* talk_about_your_life_texture = new sf::Texture;
	sf::Texture* express_your_feelings_texture = new sf::Texture;
	sf::Texture* set_in_time_and_place_texture = new sf::Texture;



	sf::Sprite* ro = new sf::Sprite;
	sf::Sprite* en = new sf::Sprite;
	sf::Sprite* fr = new sf::Sprite;
	sf::Sprite* argue = new sf::Sprite;
	sf::Sprite* object = new sf::Sprite;
	sf::Sprite* describe = new sf::Sprite;
	sf::Sprite* communication = new sf::Sprite;
	sf::Sprite* irregulars_verbs = new sf::Sprite;
	sf::Sprite* behave_in_society = new sf::Sprite;
	sf::Sprite* general_vocabular = new sf::Sprite;
	sf::Sprite* talk_about_your_life = new sf::Sprite;
	sf::Sprite* express_your_feelings = new sf::Sprite;
	sf::Sprite* set_in_time_and_place = new sf::Sprite;


	sf::Sprite* exit = new sf::Sprite;
	sf::Sprite* return_button = new sf::Sprite;
	sf::Sprite* dark_button = new sf::Sprite;
	sf::Sprite* light_button = new sf::Sprite;
	sf::Sprite* instructions = new sf::Sprite;
	sf::Sprite* change_background = new sf::Sprite;


};

