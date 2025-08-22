class Solution {
public:
/*Initial Solution -> Complexity O(n^2)
    string intToRoman(int num) {
        int temp = num;
        string res = "";
        //Hash Table
        string possible[1001];
        possible[1] = "I";
        possible[4] = "IV";
        possible[5] = "V";
        possible[9] = "IX";
        possible[10] = "X";
        possible[40] = "XL";
        possible[50] = "L";
        possible[90] = "XC";
        possible[100] = "C";
        possible[400] = "CD";
        possible[500] = "D";
        possible[900] = "CM";
        possible[1000] = "M";

        int arr[13] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        int value = 0;

        while(temp > 0) {

            int l = 0, h = 12;
            int flag = 0;
//To check which value to add to string:
        while(l <= h){
            int mid = l + (h - l)/2;
            if(arr[mid] == temp){
                value = arr[mid];
                flag = 1;
                break;
            }
            else if(arr[mid] < temp){
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
        if(flag != 1){
            value = arr[l - 1];
        }
//Adding the string
        res += possible[value];
        temp -= value;
        value = 0;
        }
        return res;
    }

    */
    string intToRoman(int num) {
        string result;
        while (num > 0) {
            if (num >= 1000) {
                result += 'M';
                num -= 1000;
            }
            else if (num >= 900) {
                result += "CM";
                num -= 900;
            }
            else if (num >= 500) {
                result += 'D';
                num -= 500;
            }
            else if (num >= 400) {
                result += "CD";
                num -= 400;
            }
            else if (num >= 100) {
                result += 'C';
                num -= 100;
            }
            else if (num >= 90) {
                result += "XC";
                num -= 90;
            }
            else if (num >= 50) {
                result += 'L';
                num -= 50;
            }
            else if (num >= 40) {
                result += "XL";
                num -= 40;
            }
            else if (num >= 10) {
                result += 'X';
                num -= 10;
            }
            else if (num >= 9) {
                result += "IX";
                num -= 9;
            }
            else if (num >= 5) {
                result += 'V';
                num -= 5;
            }
            else if (num >= 4) {
                result += "IV";
                num -= 4;
            }
            else {
                result += 'I';
                num -= 1;
            }
        }
        return result;
    }

};