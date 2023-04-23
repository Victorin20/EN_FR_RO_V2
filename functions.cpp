#include "functions.h"


using namespace sf;
using namespace std;
#pragma warning(disable : 4018)
#pragma warning(disable : 4267)

void pause()
{
	Clock clock;
	clock.restart();
	int time(0), time2(0);
	while (time + 350 >= time2)time2 = clock.getElapsedTime().asMilliseconds();
}

void pause(int x)
{
	Clock clock;
	clock.restart();
	int time(0), time2(0);
	while (time + x >= time2)time2 = clock.getElapsedTime().asMilliseconds();
}

void long_pause()
{
	Clock clock;
	clock.restart();
	int time(0), time2(0);
	while (time + 1500 >= time2)time2 = clock.getElapsedTime().asMilliseconds();
}


void read(vector<string>& english, vector<string>& frensh, vector<string>& romain, const string& chapter)
{
	string word_en = "";
	string word_fr = "";
	string word_ro = "";

	bool push = false;

	ifstream file1("vocabulary/dicoen.txt");
	while (getline(file1, word_en))
	{
		if (word_en == chapter)push = true;

		if (word_en == "" && english.size() > 10)break;
		if (push && word_en != "" && word_en != chapter)english.push_back(word_en);
	}
	push = false;

	ifstream file2("vocabulary/dicofr.txt");
	while (getline(file2, word_fr))
	{

		if (word_fr == chapter)push = true;

		if (word_fr == "" && frensh.size() > 10)break;
		if (push && word_fr != "" && word_fr != chapter)frensh.push_back(word_fr);
	}
	push = false;

	ifstream file3("vocabulary/dicoro.txt");
	while (getline(file3, word_ro))
	{
		if (word_ro == chapter)push = true;

		if (word_ro == "" && romain.size() > 10)break;
		if (push && word_ro != "" && word_ro != chapter)romain.push_back(word_ro);
	}

}

void read_irregular_verbs(vector<string>& infinitiv, vector<string>& past_simple, vector<string>& past_participle)
{

	ifstream file1("irregular_verbs/infinitiv.txt");
	ifstream file2("irregular_verbs/past_simple.txt");
	ifstream file3("irregular_verbs/past_participle.txt");

	string word1 = "";
	string word2 = "";
	string word3 = "";

	while (getline(file1, word1))infinitiv.push_back(word1);

	while (getline(file2, word2))past_simple.push_back(word2);

	while (getline(file3, word3))past_participle.push_back(word3);

}

void read_adjectives(vector<string>& english, vector<string>& frensh, vector<string>& romain, const string& first_language, const string& second_language)
{
	string word = "";

	if ((first_language == "en" && second_language == "fr") || (first_language == "fr" && second_language == "en"))
	{
		ifstream file_en("general_vocabulary/en_fr/adjectives_en.txt");

		while (getline(file_en, word))english.push_back(word);

		ifstream file_fr("general_vocabulary/en_fr/adjectives_fr.txt");

		while (getline(file_fr, word))frensh.push_back(word);

	}

	if ((first_language == "en" && second_language == "ro") || (first_language == "ro" && second_language == "en"))
	{

		ifstream file_en("general_vocabulary/en_ro/adjectives_en.txt");

		while (getline(file_en, word))english.push_back(word);

		ifstream file_ro("general_vocabulary/en_ro/adjectives_ro.txt");

		while (getline(file_ro, word))romain.push_back(word);

	}

	if ((first_language == "ro" && second_language == "fr") || (first_language == "fr" && second_language == "ro"))
	{


		ifstream file_fr("general_vocabulary/fr_ro/adjectives_fr.txt");

		while (getline(file_fr, word))frensh.push_back(word);

		ifstream file_ro("general_vocabulary/fr_ro/adjectives_ro.txt");

		while (getline(file_ro, word))romain.push_back(word);

	}
}

void read_substantives(vector<string>& english, vector<string>& frensh, vector<string>& romain, const string& first_language, const string& second_language)
{
	string word = "";
	if ((first_language == "en" && second_language == "fr") || (first_language == "fr" && second_language == "en"))
	{
		ifstream file_en("general_vocabulary/en_fr/substantives_en.txt");

		while (getline(file_en, word))english.push_back(word);


		ifstream file_fr("general_vocabulary/en_fr/substantives_fr.txt");

		while (getline(file_fr, word))frensh.push_back(word);

	}

	if ((first_language == "en" && second_language == "ro") || (first_language == "ro" && second_language == "en"))
	{

		ifstream file_en("general_vocabulary/en_ro/substantives_en.txt");

		while (getline(file_en, word))english.push_back(word);


		ifstream file_ro("general_vocabulary/en_ro/substantives_ro.txt");

		while (getline(file_ro, word))romain.push_back(word);

	}

	if ((first_language == "fr" && second_language == "ro") || (first_language == "ro" && second_language == "fr"))
	{


		ifstream file_fr("general_vocabulary/fr_ro/substantives_fr.txt");

		while (getline(file_fr, word))frensh.push_back(word);

		ifstream file_ro("general_vocabulary/fr_ro/substantives_ro.txt");

		while (getline(file_ro, word))romain.push_back(word);

	}

}

void read_adverbs(vector<string>& english, vector<string>& frensh, vector<string>& romain, const string& first_language, const string& second_language)
{
	string word = "";
	if ((first_language == "en" && second_language == "fr") || (first_language == "fr" && second_language == "en"))
	{
		ifstream file_en("general_vocabulary/en_fr/adverbs_en.txt");

		while (getline(file_en, word))english.push_back(word);

		ifstream file_fr("general_vocabulary/en_fr/adverbs_fr.txt");

		while (getline(file_fr, word))frensh.push_back(word);

	}

	if ((first_language == "en" && second_language == "ro") || (first_language == "ro" && second_language == "en"))
	{

		ifstream file_en("general_vocabulary/en_ro/adverbs_en.txt");

		while (getline(file_en, word))english.push_back(word);

		ifstream file_ro("general_vocabulary/en_ro/adverbs_ro.txt");

		while (getline(file_ro, word))romain.push_back(word);

	}

	if ((first_language == "fr" && second_language == "ro") || (first_language == "ro" && second_language == "fr"))
	{


		ifstream file_fr("general_vocabulary/fr_ro/adverbs_fr.txt");

		while (getline(file_fr, word))frensh.push_back(word);

		ifstream file_ro("general_vocabulary/fr_ro/adverbs_ro.txt");

		while (getline(file_ro, word))romain.push_back(word);

	}

}

void read_verbs(vector<string>& english, vector<string>& frensh, vector<string>& romain, const string& first_language, const string& second_language)
{
	string word = "";
	if ((first_language == "en" && second_language == "fr") || (first_language == "fr" && second_language == "en"))
	{
		ifstream file_en("general_vocabulary/en_fr/verbs_en.txt");

		while (getline(file_en, word))english.push_back(word);

		ifstream file_fr("general_vocabulary/en_fr/verbs_fr.txt");

		while (getline(file_fr, word))frensh.push_back(word);

	}

	if ((first_language == "en" && second_language == "ro") || (first_language == "ro" && second_language == "en"))
	{

		ifstream file_en("general_vocabulary/en_ro/verbs_en.txt");

		while (getline(file_en, word))english.push_back(word);

		ifstream file_ro("general_vocabulary/en_ro/verbs_ro.txt");

		while (getline(file_ro, word))romain.push_back(word);

	}

	if ((first_language == "fr" && second_language == "ro") || (first_language == "ro" && second_language == "fr"))
	{

		ifstream file_fr("general_vocabulary/fr_ro/verbs_fr.txt");

		while (getline(file_fr, word))frensh.push_back(word);

		ifstream file_ro("general_vocabulary/fr_ro/verbs_ro.txt");

		while (getline(file_ro, word))romain.push_back(word);

	}

}


void GetDesktopResolution(int* horizontal, int* vertical)
{
	RECT desktop;

	const HWND hDesktop = GetDesktopWindow();

	GetWindowRect(hDesktop, &desktop);

	*horizontal = desktop.right;
	*vertical = desktop.bottom;
}


void save_correct_words(int& correct_words)
{
	int read_correct_words = 0;
	string read_correct_words_str = "";
	ofstream read;

	ifstream read_file("rewards/correct_words.txt");
	getline(read_file, read_correct_words_str);

	stringstream read_correct_words_int(read_correct_words_str);
	read_correct_words_int >> read_correct_words;
	read_correct_words += correct_words;

	read.open("rewards/correct_words.txt");

	read << read_correct_words;

	read.close();
}

void save_added_words(int& added_words)
{
	int read_added_words = 0;
	string read_added_words_str = "";
	ofstream read;

	ifstream read_file("rewards/added_words.txt");
	getline(read_file, read_added_words_str);

	stringstream read_added_words_int(read_added_words_str);
	read_added_words_int >> read_added_words;
	read_added_words += added_words;

	read.open("rewards/added_words.txt");
	read << read_added_words;
	read.close();
}

void save_progression(int& inputed_word, const string& chapter)
{
	string word("");
	ifstream file("save_files/save_file.txt");
	vector<string> table;
	string inputed_word_str = to_string(inputed_word);
	ofstream file3, file4;

	while (getline(file, word))table.push_back(word);

	for (int k(0); k < table.size(); k++)if (table[k] == chapter)table[k + 1] = inputed_word_str;

	file3.open("save_files/save_file.txt");
	file4.open("save_files/save_file.txt", ios::app);

	for (int k(0); k < table.size(); k++)file4 << table[k] << endl;

	file4.close();
}


void save_progression_ir(int& inputed_word)
{
	ofstream save_file; save_file.open("save_files/save_file_irregular_verbs.txt");
	save_file << inputed_word << endl;
	save_file.close();
}

void save_progression_general_vocabulary(int& inputed_word, const string& first_language, const string& second_language, const string& aavs)
{

	if ((first_language == "ro" || first_language == "en") && (second_language == "en" || second_language == "ro"))
	{
		if (aavs == "verbs") { ofstream path; path.open("save_files/save_vocabular_en_ro_verbs.txt"); path << inputed_word; path.close(); }
		if (aavs == "adverbs") { ofstream path; path.open("save_files/save_vocabular_en_ro_adverbs.txt"); path << inputed_word; path.close(); }
		if (aavs == "adjectives") { ofstream path; path.open("save_files/save_vocabular_en_ro_adjectives.txt"); path << inputed_word; path.close(); }
		if (aavs == "substantives") { ofstream path; path.open("save_files/save_vocabular_en_ro_substantives.txt"); path << inputed_word; path.close(); };
	}

	if ((first_language == "fr" || first_language == "en") && (second_language == "en" || second_language == "fr"))
	{
		if (aavs == "verbs") { ofstream path; path.open("save_files/save_vocabular_en_fr_verbs.txt"); path << inputed_word; path.close(); }
		if (aavs == "adverbs") { ofstream path; path.open("save_files/save_vocabular_en_fr_adverbs.txt"); path << inputed_word; path.close(); }
		if (aavs == "adjectives") { ofstream path; path.open("save_files/save_vocabular_en_fr_adjectives.txt"); path << inputed_word; path.close(); }
		if (aavs == "substantives") { ofstream path; path.open("save_files/save_vocabular_en_fr_substantives.txt"); path << inputed_word; path.close(); };
	}

	if ((first_language == "fr" || first_language == "ro") && (second_language == "ro" || second_language == "fr"))
	{
		if (aavs == "verbs") { ofstream path; path.open("save_files/save_vocabular_fr_ro_verbs.txt"); path << inputed_word; path.close(); }
		if (aavs == "adverbs") { ofstream path; path.open("save_files/save_vocabular_fr_ro_adverbs.txt"); path << inputed_word; path.close(); }
		if (aavs == "adjectives") { ofstream path; path.open("save_files/save_vocabular_fr_ro_adjectives.txt"); path << inputed_word; path.close(); }
		if (aavs == "substantives") { ofstream path; path.open("save_files/save_vocabular_fr_ro_substantives.txt"); path << inputed_word; path.close(); };
	}

}




void add_a_list_of_words_en_fr_ro(string& words_list)
{
	string word = "";
	string zero = "0";
	string names_pace = "\n";
	int added_words = 0;
	vector<string> a;
	vector<string> english;
	vector<string> frensh;
	vector<string> romain;
	vector<string> chapter_table;
	bool push = false;

	string chapters[4] = { "substantives", "adjectives", "adverbs", "verbs" };

	ofstream file1, file2, file4, file6, file8, file9, file10;
	ofstream file11, file13, file15, file17, file18, file19;
	ofstream file20, file22, file24, file26, file27, file28;
	ofstream file29, file31, file33, file34, file36;


	///////////////////////////////////////////////////////////////////////////

	file1.open("general_vocabulary/en_fr/substantives_en.txt", ios::app);
	file2.open("general_vocabulary/en_fr/substantives_fr.txt", ios::app);

	file4.open("general_vocabulary/en_ro/substantives_en.txt", ios::app);
	file6.open("general_vocabulary/en_ro/substantives_ro.txt", ios::app);

	file8.open("general_vocabulary/fr_ro/substantives_fr.txt", ios::app);
	file9.open("general_vocabulary/fr_ro/substantives_ro.txt", ios::app);


	///////////////////////////////////////////////////////////////////////////

	file10.open("general_vocabulary/en_fr/adjectives_en.txt", ios::app);
	file11.open("general_vocabulary/en_fr/adjectives_fr.txt", ios::app);

	file13.open("general_vocabulary/en_ro/adjectives_en.txt", ios::app);
	file15.open("general_vocabulary/en_ro/adjectives_ro.txt", ios::app);

	file17.open("general_vocabulary/fr_ro/adjectives_fr.txt", ios::app);
	file18.open("general_vocabulary/fr_ro/adjectives_ro.txt", ios::app);


	///////////////////////////////////////////////////////////////////////////

	file19.open("general_vocabulary/en_fr/adverbs_en.txt", ios::app);
	file20.open("general_vocabulary/en_fr/adverbs_fr.txt", ios::app);

	file22.open("general_vocabulary/en_ro/adverbs_en.txt", ios::app);
	file24.open("general_vocabulary/en_ro/adverbs_ro.txt", ios::app);

	file26.open("general_vocabulary/fr_ro/adverbs_fr.txt", ios::app);
	file27.open("general_vocabulary/fr_ro/adverbs_ro.txt", ios::app);

	///////////////////////////////////////////////////////////////////////////

	file28.open("general_vocabulary/en_fr/verbs_en.txt", ios::app);
	file29.open("general_vocabulary/en_fr/verbs_fr.txt", ios::app);

	file31.open("general_vocabulary/en_ro/verbs_en.txt", ios::app);
	file33.open("general_vocabulary/en_ro/verbs_ro.txt", ios::app);

	file34.open("general_vocabulary/fr_ro/verbs_fr.txt", ios::app);
	file36.open("general_vocabulary/fr_ro/verbs_ro.txt", ios::app);

	///////////////////////////////////////////////////////////////////////////

	for (int k(0); k < words_list.size(); k++)
	{
		if (words_list[k] == names_pace[0])word.erase(word.size() - 1, 1), a.push_back(word), word = "";
		if (words_list[k] != names_pace[0])word += words_list[k];
	}


	for (int j(0); j < 4; j++)
	{

		for (int t(0); t < a.size(); t++)
		{

			if (chapters[j] == a[t])t += 2, push = true;

			if (a[t] == "")push = false;

			if (a[t] != "" && push)
			{
				word = a[t];

				string wordEN = "";
				for (int u(0); u < word.size(); u++)
				{
					if (word[u] == zero[0])
					{
						wordEN.erase(u - 1, 1);
						break;
					}

					wordEN += word[u];
				}
				english.push_back(wordEN);
				string wordFR = ""; bool one = false;
				for (int f(0); f < word.size(); f++)
				{
					if (word[f + 1] == zero[0] && one == true)break;

					if (word[f] == zero[0])
					{
						one = true;
						wordFR = "";
						f += 2;
					}

					wordFR += word[f];

				}
				frensh.push_back(wordFR);
				string wordRO = ""; bool two = false;

				for (int f(0); f < word.size(); f++)
				{

					if (word[f] == zero[0] && two == true)
					{
						wordRO = "";
						f += 2;
					}

					if (word[f] == zero[0])two = true;

					wordRO += word[f];
				}
				romain.push_back(wordRO);
			}

		}
		switch (j)
		{
		case 0:
			for (int c(0); c < english.size(); c++)
			{
				file1 << english[c] << endl;
				file4 << english[c] << endl;

				file2 << frensh[c] << endl;
				file8 << frensh[c] << endl;

				file6 << romain[c] << endl;
				file9 << romain[c] << endl;

			}
			break;

		case 1:
			for (int c(0); c < english.size(); c++)
			{
				file10 << english[c] << endl;
				file13 << english[c] << endl;

				file11 << frensh[c] << endl;
				file17 << frensh[c] << endl;

				file15 << romain[c] << endl;
				file18 << romain[c] << endl;

			}
			break;

		case 2:
			for (int c(0); c < english.size(); c++)
			{
				file19 << english[c] << endl;
				file22 << english[c] << endl;

				file20 << frensh[c] << endl;
				file26 << frensh[c] << endl;

				file24 << romain[c] << endl;
				file27 << romain[c] << endl;
			}
			break;

		case 3:
			for (int c(0); c < english.size(); c++)
			{
				file28 << english[c] << endl;
				file31 << english[c] << endl;

				file29 << frensh[c] << endl;
				file34 << frensh[c] << endl;

				file33 << romain[c] << endl;
				file36 << romain[c] << endl;
			}
			break;

		}
		added_words += english.size();
		while (english.size() != 0)english.pop_back();
		while (frensh.size() != 0)frensh.pop_back();
		while (romain.size() != 0)romain.pop_back();

	}
	file1.close();
	file2.close();
	file4.close();
	file6.close();
	file8.close();
	file9.close();
	file10.close();
	file11.close();
	file13.close();
	file15.close();
	file17.close();
	file18.close();
	file19.close();
	file20.close();
	file22.close();
	file24.close();
	file26.close();
	file27.close();
	file28.close();
	file29.close();
	file31.close();
	file33.close();
	file34.close();
	file36.close();

	save_added_words(added_words);

}

void add_a_list_of_words_en_fr(string& words_list)
{
	string word = "";
	string zero = "0";
	string first_language = "en";
	string second_language = "fr";
	string names_pace = "\n";
	int added_words = 0;
	vector<string> a;
	vector<string> english;
	vector<string> frensh;
	vector<string> chapter_table;
	bool push = false;

	string chapters[4] = { "substantives", "adjectives", "adverbs", "verbs" };

	ofstream file1, file2, file10, file11, file19, file20, file28, file29;

	///////////////////////////////////////////////////////////////////////////

	file1.open("general_vocabulary/en_fr/substantives_en.txt", ios::app);
	file2.open("general_vocabulary/en_fr/substantives_fr.txt", ios::app);

	///////////////////////////////////////////////////////////////////////////

	file10.open("general_vocabulary/en_fr/adjectives_en.txt", ios::app);
	file11.open("general_vocabulary/en_fr/adjectives_fr.txt", ios::app);

	///////////////////////////////////////////////////////////////////////////

	file19.open("general_vocabulary/en_fr/adverbs_en.txt", ios::app);
	file20.open("general_vocabulary/en_fr/adverbs_fr.txt", ios::app);

	///////////////////////////////////////////////////////////////////////////

	file28.open("general_vocabulary/en_fr/verbs_en.txt", ios::app);
	file29.open("general_vocabulary/en_fr/verbs_fr.txt", ios::app);

	///////////////////////////////////////////////////////////////////////////

	for (int k(0); k < words_list.size(); k++)
	{
		if (words_list[k] == names_pace[0])word.erase(word.size() - 1, 1), a.push_back(word), word = "";
		if (words_list[k] != names_pace[0])word += words_list[k];
	}


	for (int j(0); j < 4; j++)
	{

		for (int t(0); t < a.size(); t++)
		{

			if (chapters[j] == a[t])t += 2, push = true;

			if (a[t] == "")push = false;

			if (a[t] != "" && push)
			{
				word = a[t];

				string wordEN = "";
				for (int u(0); u < word.size(); u++)
				{
					if (word[u] == zero[0])
					{
						wordEN.erase(u - 1, 1);
						break;
					}

					wordEN += word[u];
				}
				if (!alredy_here(first_language, second_language, chapters[j], wordEN))english.push_back(wordEN);
				string wordFR = ""; bool one = false;
				for (int f(0); f < word.size(); f++)
				{
					if (word[f + 1] == zero[0] && one == true)break;

					if (word[f] == zero[0])
					{
						one = true;
						wordFR = "";
						f += 2;
					}

					wordFR += word[f];

				}
				if (!alredy_here(first_language, second_language, chapters[j], wordEN))frensh.push_back(wordFR);


			}

		}
		switch (j)
		{
		case 0:
			for (int c(0); c < english.size(); c++)
			{
				file1 << english[c] << endl;
				file2 << frensh[c] << endl;
			}
			break;

		case 1:
			for (int c(0); c < english.size(); c++)
			{
				file10 << english[c] << endl;
				file11 << frensh[c] << endl;
			}
			break;

		case 2:
			for (int c(0); c < english.size(); c++)
			{
				file19 << english[c] << endl;
				file20 << frensh[c] << endl;
			}
			break;

		case 3:
			for (int c(0); c < english.size(); c++)
			{
				file28 << english[c] << endl;
				file29 << frensh[c] << endl;
			}
			break;

		}
		added_words += english.size();
		while (english.size() != 0)english.pop_back();
		while (frensh.size() != 0)frensh.pop_back();

	}
	file1.close();
	file2.close();
	file10.close();
	file11.close();
	file19.close();
	file20.close();
	file28.close();
	file29.close();

	save_added_words(added_words);
}

void add_a_list_of_words_en_ro(string& words_list)
{
	string word = "";
	string zero = "0";
	string names_pace = "\n";
	string first_language = "en";
	string second_language = "ro";
	int added_words = 0;
	vector<string> a;
	vector<string> english;
	vector<string> romain;
	vector<string> chapter_table;
	bool push = false;

	string chapters[4] = { "substantives", "adjectives", "adverbs", "verbs" };

	ofstream file4, file6, file13, file15, file22, file24, file31, file33;

	///////////////////////////////////////////////////////////////////////////

	file4.open("general_vocabulary/en_ro/substantives_en.txt", ios::app);
	file6.open("general_vocabulary/en_ro/substantives_ro.txt", ios::app);

	///////////////////////////////////////////////////////////////////////////

	file13.open("general_vocabulary/en_ro/adjectives_en.txt", ios::app);
	file15.open("general_vocabulary/en_ro/adjectives_ro.txt", ios::app);
	///////////////////////////////////////////////////////////////////////////

	file22.open("general_vocabulary/en_ro/adverbs_en.txt", ios::app);
	file24.open("general_vocabulary/en_ro/adverbs_ro.txt", ios::app);

	///////////////////////////////////////////////////////////////////////////

	file31.open("general_vocabulary/en_ro/verbs_en.txt", ios::app);
	file33.open("general_vocabulary/en_ro/verbs_ro.txt", ios::app);

	///////////////////////////////////////////////////////////////////////////

	for (int k(0); k < words_list.size(); k++)
	{
		if (words_list[k] == names_pace[0])word.erase(word.size() - 1, 1), a.push_back(word), word = "";
		if (words_list[k] != names_pace[0])word += words_list[k];
	}


	for (int j(0); j < 4; j++)
	{

		for (int t(0); t < a.size(); t++)
		{

			if (chapters[j] == a[t])t += 2, push = true;

			if (a[t] == "")push = false;

			if (a[t] != "" && push)
			{
				word = a[t];

				string wordEN = "";
				for (int u(0); u < word.size(); u++)
				{
					if (word[u] == zero[0])
					{
						wordEN.erase(u - 1, 1);
						break;
					}

					wordEN += word[u];
				}
				if (!alredy_here(first_language, second_language, chapters[j], wordEN))english.push_back(wordEN);

				string wordRO = ""; bool one = false;
				for (int f(0); f < word.size(); f++)
				{
					if (word[f + 1] == zero[0] && one == true)break;

					if (word[f] == zero[0])
					{
						one = true;
						wordRO = "";
						f += 2;
					}

					wordRO += word[f];

				}
				if (!alredy_here(first_language, second_language, chapters[j], wordEN))romain.push_back(wordRO);
			}

		}
		switch (j)
		{
		case 0:
			for (int c(0); c < english.size(); c++)
			{
				file4 << english[c] << endl;
				file6 << romain[c] << endl;
			}

			file4.close();
			file6.close();

			break;

		case 1:
			for (int c(0); c < english.size(); c++)
			{
				file13 << english[c] << endl;
				file15 << romain[c] << endl;
			}

			break;

		case 2:
			for (int c(0); c < english.size(); c++)
			{
				file22 << english[c] << endl;
				file24 << romain[c] << endl;
			}
			break;

		case 3:
			for (int c(0); c < english.size(); c++)
			{
				file31 << english[c] << endl;
				file33 << romain[c] << endl;
			}

			break;

		}

		added_words += english.size();
		while (english.size() != 0)english.pop_back();
		while (romain.size() != 0)romain.pop_back();

	}
	file13.close();
	file15.close();
	file22.close();
	file24.close();
	file31.close();
	file33.close();

	save_added_words(added_words);
}

void add_a_list_of_words_fr_ro(string& words_list)
{

	string word = "";
	string zero = "0";
	string names_pace = "\n";
	int added_words = 0;
	vector<string> a;
	vector<string> frensh;
	vector<string> romain;
	vector<string> chapter_table;
	bool push = false;

	string chapters[4] = { "substantives", "adjectives", "adverbs", "verbs" };

	ofstream file8, file9, file17, file18, file26, file27, file35, file36;

	///////////////////////////////////////////////////////////////////////////

	file8.open("general_vocabulary/fr_ro/substantives_fr.txt", ios::app);
	file9.open("general_vocabulary/fr_ro/substantives_ro.txt", ios::app);

	///////////////////////////////////////////////////////////////////////////

	file17.open("general_vocabulary/fr_ro/adjectives_fr.txt", ios::app);
	file18.open("general_vocabulary/fr_ro/adjectives_ro.txt", ios::app);

	///////////////////////////////////////////////////////////////////////////

	file26.open("general_vocabulary/fr_ro/adverbs_fr.txt", ios::app);
	file27.open("general_vocabulary/fr_ro/adverbs_ro.txt", ios::app);

	///////////////////////////////////////////////////////////////////////////

	file35.open("general_vocabulary/fr_ro/verbs_fr.txt", ios::app);
	file36.open("general_vocabulary/fr_ro/verbs_ro.txt", ios::app);

	///////////////////////////////////////////////////////////////////////////

	for (int k(0); k < words_list.size(); k++)
	{
		if (words_list[k] == names_pace[0])word.erase(word.size() - 1, 1), a.push_back(word), word = "";
		if (words_list[k] != names_pace[0])word += words_list[k];
	}


	for (int j(0); j < 4; j++)
	{

		for (int t(0); t < a.size(); t++)
		{

			if (chapters[j] == a[t])t += 2, push = true;

			if (a[t] == "")push = false;

			if (a[t] != "" && push)
			{
				word = a[t];

				string wordFR = "";
				for (int u(0); u < word.size(); u++)
				{
					if (word[u] == zero[0])
					{
						wordFR.erase(u - 1, 1);
						break;
					}

					wordFR += word[u];
				}
				frensh.push_back(wordFR);
				string wordRO = ""; bool one = false;
				for (int f(0); f < word.size(); f++)
				{
					if (word[f + 1] == zero[0] && one == true)break;

					if (word[f] == zero[0])
					{
						one = true;
						wordRO = "";
						f += 2;
					}

					wordRO += word[f];

				}
				romain.push_back(wordRO);

			}

		}
		switch (j)
		{
		case 0:
			for (int c(0); c < frensh.size(); c++)
			{
				file8 << frensh[c] << endl;
				file9 << romain[c] << endl;
			}
			break;

		case 1:
			for (int c(0); c < frensh.size(); c++)
			{
				file17 << frensh[c] << endl;
				file18 << romain[c] << endl;
			}
			break;

		case 2:
			for (int c(0); c < frensh.size(); c++)
			{
				file26 << frensh[c] << endl;
				file27 << romain[c] << endl;
			}
			break;

		case 3:
			for (int c(0); c < frensh.size(); c++)
			{
				file35 << frensh[c] << endl;
				file36 << romain[c] << endl;
			}
			break;

		}

		added_words += frensh.size();
		while (frensh.size() != 0)frensh.pop_back();
		while (romain.size() != 0)romain.pop_back();

	}
	file35.close();
	file36.close();
	file26.close();
	file27.close();
	file17.close();
	file18.close();
	file8.close();
	file9.close();

	save_added_words(added_words);
}



void read_progression(int* inputed_word, const string& chapter)
{
	string word = "";
	ifstream file("save_files/save_file.txt");
	vector<string> table;

	while (getline(file, word))table.push_back(word);


	for (int k(0); k < table.size(); k++)if (table[k] == chapter)word = table[k + 1];

	stringstream inputed_word_int(word);
	inputed_word_int >> *inputed_word;

}

void read_progression_ir(int* inputed_word)
{
	ifstream file("save_files/save_file_irregular_verbs.txt");

	string inputed_word_str = "";

	getline(file, inputed_word_str);

	stringstream inputed_word_int(inputed_word_str);

	inputed_word_int >> *inputed_word;
}

void read_progression_general_vocabulary(int* inputed_word, const string& first_language, const string& second_language, const string& aavs)
{
	string read_word_str = "";

	if ((first_language == "ro" || first_language == "en") && (second_language == "en" || second_language == "ro"))
	{
		if (aavs == "verbs") { ifstream path("save_files/save_vocabular_en_ro_verbs.txt"); getline(path, read_word_str); }
		if (aavs == "adverbs") { ifstream path("save_files/save_vocabular_en_ro_adverbs.txt"); getline(path, read_word_str); }
		if (aavs == "adjectives") { ifstream path("save_files/save_vocabular_en_ro_adjectives.txt"); getline(path, read_word_str); }
		if (aavs == "substantives") { ifstream path("save_files/save_vocabular_en_ro_substantives.txt"); getline(path, read_word_str); }

		stringstream read_word_int(read_word_str);
		read_word_int >> *inputed_word;
	}

	if ((first_language == "fr" || first_language == "en") && (second_language == "en" || second_language == "fr"))
	{
		if (aavs == "verbs") { ifstream path("save_files/save_vocabular_en_fr_verbs.txt"); getline(path, read_word_str); }
		if (aavs == "adverbs") { ifstream path("save_files/save_vocabular_en_fr_adverbs.txt"); getline(path, read_word_str); }
		if (aavs == "adjectives") { ifstream path("save_files/save_vocabular_en_fr_adjectives.txt"); getline(path, read_word_str); }
		if (aavs == "substantives") { ifstream path("save_files/save_vocabular_en_fr_substantives.txt"); getline(path, read_word_str); }

		stringstream read_word_int(read_word_str);
		read_word_int >> *inputed_word;
	}

	if ((first_language == "fr" || first_language == "ro") && (second_language == "ro" || second_language == "fr"))
	{
		if (aavs == "verbs") { ifstream path("save_files/save_vocabular_fr_ro_verbs.txt"); getline(path, read_word_str); }
		if (aavs == "adverbs") { ifstream path("save_files/save_vocabular_fr_ro_adverbs.txt"); getline(path, read_word_str); }
		if (aavs == "adjectives") { ifstream path("save_files/save_vocabular_fr_ro_adjectives.txt"); getline(path, read_word_str); }
		if (aavs == "substantives") { ifstream path("save_files/save_vocabular_fr_ro_substantives.txt"); getline(path, read_word_str); }

		stringstream read_word_int(read_word_str);
		read_word_int >> *inputed_word;
	}


}

void read_background(string* background_table, const Texture& background_texture1, const Texture& background_texture2, const Texture& background_texture3, const Texture& background_texture4, const Texture& background_texture5, const Texture& background_texture6, const Texture& background_texture7, const Texture& background_texture8, const Texture& background_texture9, const Texture& background_texture10, const Texture& background_texture11, const Texture& background_texture12, Sprite& background, bool& is_dark)
{
	ifstream file("change_background.txt");
	int backgrounds_number = 12;
	string read = " ";
	string space = " ";

	int next_background = 0;
	is_dark = false;
	ofstream file1;

	getline(file, read);

	for (int k(0); k < backgrounds_number; k++)
	{
		if (background_table[k] == read)
		{
			next_background = k + 1;
			if (k == backgrounds_number - 1)next_background = 0;
			string background_str = background_table[next_background];

			for (int f(0); f < background_table[next_background].size(); f++)if (background_str[f] == space[0])is_dark = true;


			file1.open("change_background.txt");
			file1 << background_table[next_background] << endl;
		}

		switch (next_background)
		{
		case 0:
			background.setTexture(background_texture1);
			break;

		case 1:
			background.setTexture(background_texture2);
			break;

		case 2:
			background.setTexture(background_texture3);
			break;

		case 3:
			background.setTexture(background_texture4);
			break;

		case 4:
			background.setTexture(background_texture5);
			break;

		case 5:
			background.setTexture(background_texture6);
			break;

		case 6:
			background.setTexture(background_texture7);
			break;

		case 7:
			background.setTexture(background_texture8);
			break;

		case 8:
			background.setTexture(background_texture9);
			break;

		case 9:
			background.setTexture(background_texture10);
			break;

		case 10:
			background.setTexture(background_texture11);
			break;

		case 11:
			background.setTexture(background_texture12);
			break;

		}


	}

}


bool alredy_here(const std::string& first_language, const std::string& second_language, const std::string& aavs, const std::string& word)
{
	bool is_here = false;
	vector<string> english;
	vector<string> frensh;
	vector<string> romain;

	if (aavs == "substantives")read_substantives(english, frensh, romain, first_language, second_language);
	if (aavs == "adjectives")read_adjectives(english, frensh, romain, first_language, second_language);
	if (aavs == "adverbs")read_adverbs(english, frensh, romain, first_language, second_language);
	if (aavs == "verbs")read_verbs(english, frensh, romain, first_language, second_language);

	for (int k(0); k < english.size(); k++)if (english[k] == word)is_here = true;

	return is_here;
}



void read_correct_words(int* correct_words)
{
	string read_correct_words_str = "";

	ifstream read_file("rewards/correct_words.txt");
	getline(read_file, read_correct_words_str);

	stringstream read_correct_words_int(read_correct_words_str);
	read_correct_words_int >> *correct_words;
}

void read_added_words(int* added_words)
{
	string read_added_words_str = "";

	ifstream read_file("rewards/added_words.txt");
	getline(read_file, read_added_words_str);

	stringstream read_added_words_int(read_added_words_str);
	read_added_words_int >> *added_words;
}



void my_keyboard(string& traduction, int* finish_input_word)
{
	int delete_key = 0;
	if (Keyboard::isKeyPressed(Keyboard::A)) { while (Keyboard::isKeyPressed(Keyboard::A)) {}traduction += 'a'; }
	if (Keyboard::isKeyPressed(Keyboard::B)) { while (Keyboard::isKeyPressed(Keyboard::B)) {}traduction += 'b'; }
	if (Keyboard::isKeyPressed(Keyboard::C)) { while (Keyboard::isKeyPressed(Keyboard::C)) {}traduction += 'c'; }
	if (Keyboard::isKeyPressed(Keyboard::D)) { while (Keyboard::isKeyPressed(Keyboard::D)) {}traduction += 'd'; }
	if (Keyboard::isKeyPressed(Keyboard::E)) { while (Keyboard::isKeyPressed(Keyboard::E)) {}traduction += 'e'; }
	if (Keyboard::isKeyPressed(Keyboard::F)) { while (Keyboard::isKeyPressed(Keyboard::F)) {}traduction += 'f'; }
	if (Keyboard::isKeyPressed(Keyboard::G)) { while (Keyboard::isKeyPressed(Keyboard::G)) {}traduction += 'g'; }
	if (Keyboard::isKeyPressed(Keyboard::H)) { while (Keyboard::isKeyPressed(Keyboard::H)) {}traduction += 'h'; }
	if (Keyboard::isKeyPressed(Keyboard::J)) { while (Keyboard::isKeyPressed(Keyboard::J)) {}traduction += 'j'; }
	if (Keyboard::isKeyPressed(Keyboard::I)) { while (Keyboard::isKeyPressed(Keyboard::I)) {}traduction += 'i'; }
	if (Keyboard::isKeyPressed(Keyboard::K)) { while (Keyboard::isKeyPressed(Keyboard::K)) {}traduction += 'k'; }
	if (Keyboard::isKeyPressed(Keyboard::L)) { while (Keyboard::isKeyPressed(Keyboard::L)) {}traduction += 'l'; }
	if (Keyboard::isKeyPressed(Keyboard::M)) { while (Keyboard::isKeyPressed(Keyboard::M)) {}traduction += 'm'; }
	if (Keyboard::isKeyPressed(Keyboard::N)) { while (Keyboard::isKeyPressed(Keyboard::N)) {}traduction += 'n'; }
	if (Keyboard::isKeyPressed(Keyboard::O)) { while (Keyboard::isKeyPressed(Keyboard::O)) {}traduction += 'o'; }
	if (Keyboard::isKeyPressed(Keyboard::P)) { while (Keyboard::isKeyPressed(Keyboard::P)) {}traduction += 'p'; }
	if (Keyboard::isKeyPressed(Keyboard::Q)) { while (Keyboard::isKeyPressed(Keyboard::Q)) {}traduction += 'q'; }
	if (Keyboard::isKeyPressed(Keyboard::R)) { while (Keyboard::isKeyPressed(Keyboard::R)) {}traduction += 'r'; }
	if (Keyboard::isKeyPressed(Keyboard::S)) { while (Keyboard::isKeyPressed(Keyboard::S)) {}traduction += 's'; }
	if (Keyboard::isKeyPressed(Keyboard::T)) { while (Keyboard::isKeyPressed(Keyboard::T)) {}traduction += 't'; }
	if (Keyboard::isKeyPressed(Keyboard::U)) { while (Keyboard::isKeyPressed(Keyboard::U)) {}traduction += 'u'; }
	if (Keyboard::isKeyPressed(Keyboard::V)) { while (Keyboard::isKeyPressed(Keyboard::V)) {}traduction += 'v'; }
	if (Keyboard::isKeyPressed(Keyboard::W)) { while (Keyboard::isKeyPressed(Keyboard::W)) {}traduction += 'w'; }
	if (Keyboard::isKeyPressed(Keyboard::X)) { while (Keyboard::isKeyPressed(Keyboard::X)) {}traduction += 'x'; }
	if (Keyboard::isKeyPressed(Keyboard::Y)) { while (Keyboard::isKeyPressed(Keyboard::Y)) {}traduction += 'y'; }
	if (Keyboard::isKeyPressed(Keyboard::Z)) { while (Keyboard::isKeyPressed(Keyboard::Z)) {}traduction += 'z'; }
	if (Keyboard::isKeyPressed(Keyboard::Num0)) { while (Keyboard::isKeyPressed(Keyboard::Num0)) {}traduction += '0'; }
	if (Keyboard::isKeyPressed(Keyboard::Numpad0)) { while (Keyboard::isKeyPressed(Keyboard::Numpad0)) {}traduction += '0'; }
	if (Keyboard::isKeyPressed(Keyboard::Slash)) { while (Keyboard::isKeyPressed(Keyboard::Slash)) {}traduction += '/'; }
	///////////////////////////////////////////////////////////////////////////////////////symbols
	if (Keyboard::isKeyPressed(Keyboard::Hyphen)) { while (Keyboard::isKeyPressed(Keyboard::Hyphen)) {}traduction += '-'; }
	if (Keyboard::isKeyPressed(Keyboard::Comma)) { while (Keyboard::isKeyPressed(Keyboard::Comma)) {}traduction += ','; }
	if (Keyboard::isKeyPressed(Keyboard::Space)) { while (Keyboard::isKeyPressed(Keyboard::Space)) {}traduction += ' '; }
	if (Keyboard::isKeyPressed(Keyboard::LControl)) { while (Keyboard::isKeyPressed(Keyboard::LControl)) {}String string = Clipboard::getString(); traduction += string; }
	if (Keyboard::isKeyPressed(Keyboard::LAlt)) { while (Keyboard::isKeyPressed(Keyboard::LAlt)) {} traduction = ""; }


	if (Keyboard::isKeyPressed(Keyboard::BackSpace)) { pause(100); delete_key++; }
	if (Keyboard::isKeyPressed(Keyboard::Enter)) { while (Keyboard::isKeyPressed(Keyboard::Enter)) {}*finish_input_word += 1; }
	////////////////////////////////////////////////////////////////////////////delete a letter from the word
	while (delete_key > 0)
	{
		if (delete_key > 0 && traduction.size() == 0)delete_key = 0;

		if (traduction.size() >= 1)
		{

			string straduction = "";
			for (int k(0); k < traduction.size() - 1; k++)straduction += traduction[k];
			traduction = straduction;
			delete_key--;
		}

	}




}



void keyboard_f11(bool* full_screen, int* once_inputed)
{
	if (Keyboard::isKeyPressed(Keyboard::F11)) { while (Keyboard::isKeyPressed(Keyboard::F11)) {} *full_screen == true ? *full_screen = false : *full_screen = true; *once_inputed = 1; }
}



void delete_word(int& inputed_word, const string& aavs, const string& first_language, const string& second_language)
{

	int chapter = 0;
	bool en_fr = false;
	bool en_ro = false;
	bool fr_ro = false;
	bool found_word = false;
	vector<string>english;
	vector<string>frensh;
	vector<string>romain;
	string chapters[4] = { "substantives", "adjectives", "adverbs", "verbs" };

	for (int k(0); k < 4; k++)if (chapters[k] == aavs)chapter = k;

	if (aavs == "substantives")read_substantives(english, frensh, romain, first_language, second_language);
	if (aavs == "adjectives")read_adjectives(english, frensh, romain, first_language, second_language);
	if (aavs == "adverbs")read_adverbs(english, frensh, romain, first_language, second_language);
	if (aavs == "verbs")read_verbs(english, frensh, romain, first_language, second_language);

	if ((first_language == "en" && second_language == "fr") || (first_language == "fr" && second_language == "en"))en_fr = true;
	if ((first_language == "en" && second_language == "ro") || (first_language == "ro" && second_language == "en"))en_ro = true;
	if ((first_language == "fr" && second_language == "ro") || (first_language == "ro" && second_language == "fr"))fr_ro = true;


	if (en_fr)
	{
		ofstream file1, file2, file10, file11, file19, file20, file28, file29, file1_, file2_, file10_, file11_, file19_, file20_, file28_, file29_;

		switch (chapter)
		{
		case 0:
			file1_.open("general_vocabulary/en_fr/substantives_en.txt");
			file1.open("general_vocabulary/en_fr/substantives_en.txt", ios::app);
			file2_.open("general_vocabulary/en_fr/substantives_fr.txt");
			file2.open("general_vocabulary/en_fr/substantives_fr.txt", ios::app);

			for (int k(0); k < english.size(); k++)
			{
				if (k == inputed_word)continue;
				file1 << english[k] << endl;
				file2 << frensh[k] << endl;
			}
			break;

		case 1:
			file10_.open("general_vocabulary/en_fr/adjectives_en.txt");
			file10.open("general_vocabulary/en_fr/adjectives_en.txt", ios::app);
			file11_.open("general_vocabulary/en_fr/adjectives_fr.txt");
			file11.open("general_vocabulary/en_fr/adjectives_fr.txt", ios::app);

			for (int k(0); k < english.size(); k++)
			{
				if (k == inputed_word)continue;
				file10 << english[k] << endl;
				file11 << frensh[k] << endl;
			}
			break;

		case 2:
			file19_.open("general_vocabulary/en_fr/adverbs_en.txt");
			file19.open("general_vocabulary/en_fr/adverbs_en.txt", ios::app);
			file20_.open("general_vocabulary/en_fr/adverbs_fr.txt");
			file20.open("general_vocabulary/en_fr/adverbs_fr.txt", ios::app);

			for (int k(0); k < english.size(); k++)
			{
				if (k == inputed_word)continue;
				file19 << english[k] << endl;
				file20 << frensh[k] << endl;
			}
			break;

		case 3:
			file28_.open("general_vocabulary/en_fr/verbs_en.txt");
			file28.open("general_vocabulary/en_fr/verbs_en.txt", ios::app);
			file29_.open("general_vocabulary/en_fr/verbs_fr.txt");
			file29.open("general_vocabulary/en_fr/verbs_fr.txt", ios::app);

			for (int k(0); k < english.size(); k++)
			{
				if (k == inputed_word)continue;
				file28 << english[k] << endl;
				file29 << frensh[k] << endl;
			}
			break;

		}


		file1.close();
		file2.close();
		file10.close();
		file11.close();
		file19.close();
		file20.close();
		file28.close();
		file29.close();
		file1_.close();
		file2_.close();
		file10_.close();
		file11_.close();
		file19_.close();
		file20_.close();
		file28_.close();
		file29_.close();

	}

	if (en_ro)
	{
		ofstream file4, file6, file13, file15, file22, file24, file31, file33, file4_, file6_, file13_, file15_, file22_, file24_, file31_, file33_;


		switch (chapter)
		{
		case 0:
			file4_.open("general_vocabulary/en_ro/substantives_en.txt");
			file4.open("general_vocabulary/en_ro/substantives_en.txt", ios::app);
			file6_.open("general_vocabulary/en_ro/substantives_ro.txt");
			file6.open("general_vocabulary/en_ro/substantives_ro.txt", ios::app);

			for (int k(0); k < english.size(); k++)
			{
				if (k == inputed_word)continue;
				file4 << english[k] << endl;
				file6 << romain[k] << endl;
			}
			break;

		case 1:
			file13_.open("general_vocabulary/en_ro/adjectives_en.txt");
			file13.open("general_vocabulary/en_ro/adjectives_en.txt", ios::app);
			file15_.open("general_vocabulary/en_ro/adjectives_ro.txt");
			file15.open("general_vocabulary/en_ro/adjectives_ro.txt", ios::app);


			for (int k(0); k < english.size(); k++)
			{
				if (k == inputed_word)continue;
				file13 << english[k] << endl;
				file15 << romain[k] << endl;
			}
			break;

		case 2:
			file22_.open("general_vocabulary/en_ro/adverbs_en.txt");
			file22.open("general_vocabulary/en_ro/adverbs_en.txt", ios::app);
			file24_.open("general_vocabulary/en_ro/adverbs_ro.txt");
			file24.open("general_vocabulary/en_ro/adverbs_ro.txt", ios::app);

			for (int k(0); k < english.size(); k++)
			{
				if (k == inputed_word)continue;
				file22 << english[k] << endl;
				file24 << romain[k] << endl;
			}
			break;

		case 3:
			file31_.open("general_vocabulary/en_ro/verbs_en.txt");
			file31.open("general_vocabulary/en_ro/verbs_en.txt", ios::app);
			file33_.open("general_vocabulary/en_ro/verbs_ro.txt");
			file33.open("general_vocabulary/en_ro/verbs_ro.txt", ios::app);


			for (int k(0); k < english.size(); k++)
			{
				if (k == inputed_word)continue;
				file31 << english[k] << endl;
				file33 << romain[k] << endl;
			}
			break;



		}


		file4.close();
		file6.close();
		file13.close();
		file15.close();
		file22.close();
		file24.close();
		file31.close();
		file33.close();
		file4_.close();
		file6_.close();
		file13_.close();
		file15_.close();
		file22_.close();
		file24_.close();
		file31_.close();
		file33_.close();
	}

	if (fr_ro)
	{
		ofstream file8, file9, file17, file18, file26, file27, file34, file36, file8_, file9_, file17_, file18_, file26_, file27_, file34_, file36_;



		switch (chapter)
		{
		case 0:
			file8_.open("general_vocabulary/fr_ro/substantives_fr.txt");
			file8.open("general_vocabulary/fr_ro/substantives_fr.txt", ios::app);
			file9_.open("general_vocabulary/fr_ro/substantives_ro.txt");
			file9.open("general_vocabulary/fr_ro/substantives_ro.txt", ios::app);

			for (int k(0); k < frensh.size(); k++)
			{
				if (k == inputed_word)continue;
				file8 << frensh[k] << endl;
				file9 << romain[k] << endl;
			}
			break;

		case 1:
			file17_.open("general_vocabulary/fr_ro/adjectives_fr.txt");
			file17.open("general_vocabulary/fr_ro/adjectives_fr.txt", ios::app);
			file18_.open("general_vocabulary/fr_ro/adjectives_ro.txt");
			file18.open("general_vocabulary/fr_ro/adjectives_ro.txt", ios::app);

			for (int k(0); k < frensh.size(); k++)
			{
				if (k == inputed_word)continue;
				file17 << frensh[k] << endl;
				file18 << romain[k] << endl;
			}
			break;

		case 2:
			file26_.open("general_vocabulary/fr_ro/adverbs_fr.txt");
			file26.open("general_vocabulary/fr_ro/adverbs_fr.txt", ios::app);
			file27_.open("general_vocabulary/fr_ro/adverbs_ro.txt");
			file27.open("general_vocabulary/fr_ro/adverbs_ro.txt", ios::app);

			for (int k(0); k < frensh.size(); k++)
			{
				if (k == inputed_word)continue;
				file26 << frensh[k] << endl;
				file27 << romain[k] << endl;
			}
			break;

		case 3:
			file34_.open("general_vocabulary/fr_ro/verbs_fr.txt");
			file34.open("general_vocabulary/fr_ro/verbs_fr.txt", ios::app);
			file36_.open("general_vocabulary/fr_ro/verbs_ro.txt");
			file36.open("general_vocabulary/fr_ro/verbs_ro.txt", ios::app);

			for (int k(0); k < frensh.size(); k++)
			{
				if (k == inputed_word)continue;
				file34 << frensh[k] << endl;
				file36 << romain[k] << endl;
			}
			break;
		}

		file8.close();
		file9.close();
		file17.close();
		file18.close();
		file26.close();
		file27.close();
		file34.close();
		file36.close();
		file8_.close();
		file9_.close();
		file17_.close();
		file18_.close();
		file26_.close();
		file27_.close();
		file34_.close();
		file36_.close();
	}



}


