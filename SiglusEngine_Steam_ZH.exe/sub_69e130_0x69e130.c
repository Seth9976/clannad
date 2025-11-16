// 函数: sub_69e130
// 地址: 0x69e130
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** result = data_4ebe380
void** result_1 = result[1]

while (*(result_1 + 0xd) == 0)
    if (sub_69cee0(&result_1[4], arg1) == 0)
        result = result_1
        result_1 = *result_1
    else
        result_1 = result_1[2]

return result
