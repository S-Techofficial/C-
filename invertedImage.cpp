#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



/*
 * Complete the 'invertImage' function below.
 *
 * The function is expected to return a 2D_INTEGER_ARRAY.
 * The function accepts 2D_INTEGER_ARRAY image as parameter.
 */

vector<vector<int>> invertImage(vector<vector<int>> image) {
    for(int i=0; i<image.size(); i++){
        sort(image[i].rbegin(), image[i].rend());
    }
    return image;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string image_rows_temp;
    getline(cin, image_rows_temp);

    int image_rows = stoi(ltrim(rtrim(image_rows_temp)));

    string image_columns_temp;
    getline(cin, image_columns_temp);

    int image_columns = stoi(ltrim(rtrim(image_columns_temp)));

    vector<vector<int>> image(image_rows);

    for (int i = 0; i < image_rows; i++) {
        image[i].resize(image_columns);

        string image_row_temp_temp;
        getline(cin, image_row_temp_temp);

        vector<string> image_row_temp = split(rtrim(image_row_temp_temp));

        for (int j = 0; j < image_columns; j++) {
            int image_row_item = stoi(image_row_temp[j]);

            image[i][j] = image_row_item;
        }
    }

    vector<vector<int>> result = invertImage(image);

    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            fout << result[i][j];

            if (j != result[i].size() - 1) {
                fout << " ";
            }
        }

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
