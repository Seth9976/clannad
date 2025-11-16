// 函数: sub_4a4370
// 地址: 0x4a4370
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_414
void* result = __security_cookie ^ &var_414
void* result_1 = result
int32_t ebx = data_702fc0

if (ebx != 0)
    int32_t edi_1 = data_1af173c
    
    if (edi_1 s< 8)
        void text
        
        if (arg1 == 0xa)
            result = sub_4cfd70(&text, &data_61bb68)
        else if (arg1 == 0xc)
            result = sub_4cfd70(&text, &data_61bb7c)
        else
            result = arg1 - 0x12
            
            if (arg1 == 0x12)
                result = sub_4cfd70(&text, &data_61bb90)
        
        if (edi_1 s< 4)
            result = MessageBoxA(data_7027bc, &text, 0x61ba34, MB_OK)
            ebx = data_702fc0
            edi_1 = data_1af173c
        
        if (arg1 == 0xa)
            result = sub_4cfd70(&data_7027c0, &data_61bba4)
        else if (arg1 == 0xc)
            result = sub_4cfd70(&data_7027c0, &data_61bbc4)
        else if (arg1 == 0x12)
            result = sub_4cfd70(&data_7027c0, &data_61bbe4)
        
        if (ebx != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(result, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr)
            result = sub_4a1e40(3)
            edi_1 = data_1af173c
    
    data_1af173c = edi_1 + 1

sub_5f02dd(result_1 ^ &var_414)
return result
