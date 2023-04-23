#pragma once
#include "librarys.h"


void pause();

void pause(int x);

void long_pause();


void read_irregular_verbs(std::vector<std::string>& infinitiv, std::vector<std::string>& past_simple, std::vector<std::string>& past_participle);

void read_adverbs(std::vector<std::string>& english, std::vector<std::string>& frensh, std::vector<std::string>& romain, const std::string& first_language, const std::string& second_language);

void read_adjectives(std::vector<std::string>& english, std::vector<std::string>& frensh, std::vector<std::string>& romain, const std::string& first_language, const std::string& second_language);

void read_substantives(std::vector<std::string>& english, std::vector<std::string>& frensh, std::vector<std::string>& romain, const std::string& first_language, const std::string& second_language);

void read_verbs(std::vector<std::string>& english, std::vector<std::string>& frensh, std::vector<std::string>& romain, const std::string& first_language, const std::string& second_language);

void read(std::vector<std::string>& english, std::vector<std::string>& frensh, std::vector<std::string>& romain, const std::string& chapter);


void read_progression_ir(int* inputed_word);

void read_progression(int* inputed_word, const std::string& chapter);

void read_progression_general_vocabulary(int* inputed_word, const std::string& first_language, const std::string& second_language, const std::string& aavs);

void read_background(std::string* background_table, const sf::Texture& background_texture1, const sf::Texture& background_texture2,
	const sf::Texture& background_texture3, const sf::Texture& background_texture4, const sf::Texture& background_texture5,
	const sf::Texture& background_texture6, const sf::Texture& background_texture7, const sf::Texture& background_texture8,
	const sf::Texture& background_texture9, const sf::Texture& background_texture10, const sf::Texture& background_texture11,
	const sf::Texture& background_texture12, sf::Sprite& background, bool& is_dark);

void read_correct_words(int* correct_words);

void read_added_words(int* added_words);

void GetDesktopResolution(int* horizontal, int* vertical);


void save_correct_words(int& correct_words);

void save_added_words(int& added_words);

void save_progression(int& inputed_word, const std::string& chapter);

void save_progression_ir(int& inputed_word);

void save_progression_general_vocabulary(int& inputed_word, const std::string& first_language, const std::string& second_language, const std::string& aavs);

bool alredy_here(const std::string& first_language, const std::string& second_language, const std::string& aavs, const std::string& word);


void add_a_list_of_words_en_fr_ro(std::string& words_list);

void add_a_list_of_words_en_fr(std::string& words_list);

void add_a_list_of_words_en_ro(std::string& words_list);

void add_a_list_of_words_fr_ro(std::string& words_list);


void my_keyboard(std::string& traduction, int* finish_input_word);

void keyboard_f11(bool* full_screen, int* once_inputed);


void delete_word(int& inputed_word, const std::string& aavs, const std::string& first_language, const std::string& second_language);


























