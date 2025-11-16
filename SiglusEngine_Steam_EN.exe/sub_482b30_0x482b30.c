// 函数: sub_482b30
// 地址: 0x482b30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_21c
uint32_t result = __security_cookie ^ &var_21c
uint32_t result_1 = result

if (arg1 u<= 0xff)
    void* esi_1 = arg1 * 0x24 + &data_928db0
    result = sub_482a80(arg1)
    
    if (arg2 != 0)
        char var_218[0x20c]
        sub_4cfd70(&var_218, arg2)
        uint32_t eax_2 = sub_49ede0(&var_218)
        
        if (eax_2 s< 0)
            char* var_22c_1 = arg2
            char* eax_3 = sub_4c84d0(&data_7027c0, "%s.wav ( nwa ) ( ogg ) ")
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_3, data_72d6ac, data_719b6c, 0x61a18c, &data_7027c0), 
                        data_72d6ac, data_719b6c, 0x61a18c, &data_7027c0), 
                    data_72d6ac, data_719b6c, 0x61a18c, &data_7027c0)
            
            result = sub_446a50()
        else
            result = sub_49ef00(eax_2, &var_218, arg1 * 0x3b8 + 0xef2ef8, eax_2, 0)
            
            if (*(arg1 * 0x3b8 + 0xef2f00) != 0)
                sub_4cfdf0(result, arg2, esi_1, 0x24)
                result = sub_4c3960(esi_1, 0)
                
                if (esi_1 != 0)
                    while (true)
                        result.b = *esi_1
                        
                        if (result.b u>= 0x80 && (result.b u< 0xa0 || result.b u> 0xdf)
                                && result.b u< 0xfe)
                            esi_1 += 2
                            continue
                        
                        if (result.b == 0)
                            break
                        
                        if (result.b u>= 0x61 && result.b u<= 0x7a)
                            result.b -= 0x20
                            *esi_1 = result.b
                        
                        esi_1 += 1

sub_5f02dd(result_1 ^ &var_21c)
return result
