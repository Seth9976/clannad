// 函数: sub_41aa30
// 地址: 0x41aa30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void text
char* var_c = __security_cookie ^ &text
char* eax_1

if (data_1332b80 != 0)
    if (data_1332b7c(data_7027bc, data_1332b60, data_1332b64) != 0)
        char* eax_2
        
        if (data_702fc0 != 0)
            eax_2 = 1
            
            if (data_13184f8 == 0)
                if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                    eax_2 = nullptr
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_2 = nullptr
                
                if (data_1af174c == 0 && eax_2 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_2, data_72d6ac, data_719b6c, 0x6138e4, &data_6138e3), 
                            data_72d6ac, data_719b6c, 0x6138e4, &data_6138e3), 
                        data_72d6ac, data_719b6c, 0x6138e4, &data_6138e3)
        
        eax_2.b = 1
        sub_5f02dd(var_c ^ &text)
        return eax_2
    
    data_1332b6c(&text, 0x800)
    MessageBoxA(data_7027bc, &text, "Direct3D ", MB_OK)
    void* var_814_2 = &text
    eax_1 = sub_4c84d0(&data_7027c0, 0x613844)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_1, data_72d6ac, data_719b6c, 0x6138a0, &data_7027c0), 
                data_72d6ac, data_719b6c, 0x6138a0, &data_7027c0), 
            data_72d6ac, data_719b6c, 0x6138a0, &data_7027c0)
        sub_4a1e40(3)
    
    data_1333e30 = 0
    data_1313ca4 = 0
    data_1332b84 = 1

eax_1.b = 0
sub_5f02dd(var_c ^ &text)
return eax_1
