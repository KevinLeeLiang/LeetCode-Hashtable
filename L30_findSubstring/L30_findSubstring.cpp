//
// Created by garen_lee on 2025/2/13.
/**
  ******************************************************************************
  * @file           : L30_findSubstring.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/13
  ******************************************************************************
  */
//

#include "L30_findSubstring.h"

vector<int> L30_findSubstring::findSubstring(string s, vector<string> &words) {
    vector<int> res;//结果集
    //拿到各个长度
    // m 单词个数， n 单词长度， ls 字符串长度
    int m = words.size(), n = words[0].size(), ls = s.size();

    //开始外层循环，此处注意循环条件：i<n
    for (int i = 0; i < n && i + m * n <= ls; ++i) {
        unordered_map<string, int> differ;//这就是上面说的哈希表
        //第一个窗口，看看s被窗口框到的有哪些单词，哈希表对应单词的数量++，
        //这两个for主要是用来初始化滑动窗口，现在只是框住了，还没开始滑
        for (int j = 0; j < m; ++j) {
            ++differ[s.substr(i + j * n, n)];
        }
        //遍历words，哈希表对应单词数量--，对应单词数量为0时删除单词
        for (string &word: words) {
            if (--differ[word] == 0) {
                differ.erase(word);
            }
        }
        //内层循环：从i开始滑了，每次滑动一个单词的长度n，窗口一路滑到尾
        for (int start = i; start < ls - m * n + 1; start += n) {
            //第一个窗口已经加减过了，所以start==i的时候直接到下面去判断满不满足就行了
            if (start != i) {
                //word就是窗口最右侧的那个单词，也就是新进入窗口的单词，要++
                string word = s.substr(start + (m - 1) * n, n);
                if (++differ[word] == 0) {//判断单词值是不是0，是就删除单词
                    differ.erase(word);
                }
                //word是窗口左侧离开的单词，要--
                word = s.substr(start - n, n);
                if (--differ[word] == 0) {//判断单词值是不是0，是就删除单词
                    differ.erase(word);
                }
            }
            //判断哈希表是否为空，如果是，条件符合，窗口起始下标放进结果集
            if (differ.empty()) {
                res.emplace_back(start);
            }
        }
    }
    return res;
}

void L30_findSubstring::test() {
    string s;
    vector<string> words;
    vector<int>res;
    s = "barfoothefoobarman";
    words = {"foo", "bar"};
    res = findSubstring(s, words);
    print_vector(res);
    s = "wordgoodgoodgoodbestword";
    words = {"word", "good", "best", "word"};
    res = findSubstring(s, words);
    print_vector(res);
    s = "barfoofoobarthefoobarman";
    words = {"bar", "foo", "the"};
    res = findSubstring(s, words);
    print_vector(res);
}