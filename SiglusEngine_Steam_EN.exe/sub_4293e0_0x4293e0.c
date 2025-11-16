// 函数: sub_4293e0
// 地址: 0x4293e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* hMem_1
int32_t result = __security_cookie ^ &hMem_1
int32_t result_1 = result

if (data_1374758 != 0)
    int32_t esi_1 = data_63ece0
    
    if (esi_1 s> 0)
        int32_t eax_1 =
            sub_4a4d00(result, &data_1390760, 0x132fbce, &data_1353040, 4, 4, esi_1, 0x2710)
        
        if (data_702fc0 != 0 && eax_1 s< esi_1)
            enum MESSAGEBOX_STYLE uType = data_63ece0
            
            if (uType s> MB_OK)
                int32_t esi_2 = 0
                int32_t edi_1 = 0
                enum MESSAGEBOX_STYLE i
                
                do
                    if (*(edi_1 + &data_1390760) == 0)
                        esi_2 += 1
                    else
                        esi_2 += sub_4cfc80(*(edi_1 + &data_1353040))
                    
                    edi_1 += 4
                    i = uType
                    uType -= 1
                while (i != MB_OKCANCEL)
                
                if (esi_2 s>= 0x2710)
                    int32_t edi_2 = data_1af173c
                    
                    if (edi_2 s< 8)
                        int32_t var_6d4_1 = 0x2710
                        char text[0x404]
                        sub_4c84d0(&text, 0x61b9e4)
                        
                        if (edi_2 s< 4)
                            MessageBoxA(data_7027bc, &text, 0x61ba34, uType)
                            edi_2 = data_1af173c
                        
                        int32_t var_6d4_3 = 0x2710
                        sub_4c84d0(&data_7027c0, &data_61bad4)
                        int32_t var_6d4_4 = esi_2
                        sub_4c84d0(&text, &data_61bb04)
                        
                        if (data_702fc0 != 0)
                            sub_55ef70(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
                            sub_55f1e0(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
                            sub_55f390(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
                            sub_4a1e40(3)
                            edi_2 = data_1af173c
                    
                    data_1af173c = edi_2 + 1
    
    int32_t var_6c0 = 0xa4
    int32_t var_6bc_1 = 0x2712
    SYSTEMTIME systemTime
    GetLocalTime(&systemTime)
    void var_6a8
    sub_4cfd70(&var_6a8, "AVG_GLOBAL_SAVE")
    int32_t var_628_1 = var_6c0
    int32_t var_624_1 = 0xc860
    int32_t eax_8 = sub_4bb050(&hMem_1, 0xc860, &data_13262d0, &hMem_1)
    int32_t var_6e4_2 = 0x3e7
    data_20740bc = 0
    data_20740c0 = 0
    data_20740c4 = 0
    data_20740c8 = 0
    char var_618[0x208]
    sub_4c84d0(&var_618, "save%03d.sav")
    sub_496170(&var_6c0, 0xa4)
    void* hMem = hMem_1
    sub_496170(GlobalLock(hMem), eax_8)
    GlobalUnlock(hMem)
    HGLOBAL eax_10 = GlobalFree(hMem)
    uint32_t esi_3 = data_20740c8
    uint8_t* edi_4 = data_20740c0
    
    if (sub_495f70(eax_10, edi_4, &var_618, esi_3) == 0)
        sub_495f70(Sleep(0x1f4), edi_4, &var_618, esi_3)
    
    result = sub_4d6c40(&data_20740bc, &data_20740c0)
    data_20740bc = 0
    data_20740c0 = 0
    data_20740c4 = 0
    data_20740c8 = 0

sub_5f02dd(result_1 ^ &hMem_1)
return result
