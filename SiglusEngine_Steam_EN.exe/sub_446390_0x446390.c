// 函数: sub_446390
// 地址: 0x446390
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_414
char* result = __security_cookie ^ &var_414
char* result_1 = result
sub_4d1c30(result, &data_704898, 0x9778a0, 0x11604)
int32_t esi = data_63ecf8

if (esi s> 0)
    result = sub_4a4d00(result, &data_187a5d0, 0x988ea4, &data_1354f80, 4, 4, esi, 0x2710)
    
    if (data_702fc0 != 0 && result s< esi)
        enum MESSAGEBOX_STYLE uType_1 = data_63ecf8
        
        if (uType_1 s> MB_OK)
            void* esi_1 = nullptr
            int32_t edi_1 = 0
            enum MESSAGEBOX_STYLE uType = uType_1
            enum MESSAGEBOX_STYLE i
            
            do
                if (*(edi_1 + &data_187a5d0) == 0)
                    esi_1 += 1
                else
                    result = sub_4cfc80(*(edi_1 + &data_1354f80))
                    esi_1 += result
                
                edi_1 += 4
                i = uType
                uType -= 1
            while (i != MB_OKCANCEL)
            
            if (esi_1 s>= 0x2710)
                int32_t edi_2 = data_1af173c
                
                if (edi_2 s< 8)
                    int32_t var_424_1 = 0x2710
                    char text[0x404]
                    sub_4c84d0(&text, 0x61ba0c)
                    
                    if (edi_2 s< 4)
                        MessageBoxA(data_7027bc, &text, 0x61ba34, uType)
                        edi_2 = data_1af173c
                    
                    int32_t var_424_3 = 0x2710
                    sub_4c84d0(&data_7027c0, &data_61bb38)
                    void* var_424_4 = esi_1
                    result = sub_4c84d0(&text, &data_61bb04)
                    
                    if (data_702fc0 != 0)
                        sub_55ef70(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
                        sub_55f1e0(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
                        sub_55f390(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
                        result = sub_4a1e40(3)
                        edi_2 = data_1af173c
                
                data_1af173c = edi_2 + 1

sub_5f02dd(result_1 ^ &var_414)
return result
