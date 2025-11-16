// 函数: sub_448c60
// 地址: 0x448c60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = data_12c3ca0 == 0
data_1af44fc = 1
data_1af44f8 = 0

if (not(cond:0))
    int32_t eax = sub_4bf390(&data_1af44f0)
    bool cond:1_1 = data_1af44f0 == 0xffffffff
    data_1af44f4 = eax
    
    if (not(cond:1_1) && eax s> 0)
        data_1af44f8 = 1
    else if (data_702fc0 != 0)
        data_1af44fc = 0
        eax = sub_4bf390(&data_1af44f0)
        bool cond:2_1 = data_1af44f0 == 0xffffffff
        data_1af44f4 = eax
        
        if (not(cond:2_1))
            int32_t ecx = data_1af44f8
            data_1af44ec = 1
            
            if (eax s> 0)
                ecx = 1
            
            data_1af44f8 = ecx
            return 

data_1af44ec = 1
