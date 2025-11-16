// 函数: sub_4a40a0
// 地址: 0x4a40a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_414
char* result = __security_cookie ^ &var_414
char* result_1 = result

if (data_702fc0 != 0)
    int32_t esi_1 = data_1af173c
    
    if (esi_1 s< 8)
        char text[0x404]
        
        if (arg2 == 0xa)
            int32_t var_41c_3 = arg1
            result = sub_4c84d0(&text, "K[%$d] ")
        else if (arg2 == 0xc)
            int32_t var_41c_2 = arg1
            result = sub_4c84d0(&text, "M[%$d] ")
        else if (arg2 == 0x12)
            int32_t var_41c_1 = arg1
            result = sub_4c84d0(&text, "S[%$d] ")
        
        if (esi_1 s< 4)
            result = MessageBoxA(data_7027bc, &text, 0x61b914, MB_OK)
            esi_1 = data_1af173c
        
        if (data_702fc0 != 0)
            sub_55ef70(&text, data_72d6ac, data_719b6c, &data_61b950, &text)
            sub_55f1e0(&text, data_72d6ac, data_719b6c, &data_61b950, &text)
            sub_55f390(&text, data_72d6ac, data_719b6c, &data_61b950, &text)
            result = sub_4a1e40(3)
            esi_1 = data_1af173c
    
    data_1af173c = esi_1 + 1

sub_5f02dd(result_1 ^ &var_414)
return result
