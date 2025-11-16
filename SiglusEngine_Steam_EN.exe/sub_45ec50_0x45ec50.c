// 函数: sub_45ec50
// 地址: 0x45ec50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx_1 = data_131d2cc
int32_t i = data_1320e58
int32_t edx

if (data_1af4e78 != ecx_1 || data_1af4e74 != i)
    edx = 0
    data_1af1790 = 0
else
    edx = data_1af1790

if (data_13132f8 != 0)
    if (data_1311178 != 0)
        goto label_45ecf0
    
    goto label_45ec91

int32_t ecx

if (edx == 0 || data_1311178 != 0)
label_45ecf0:
    ecx = 0
    data_1af1798 = 1
    data_1af1794 = 0
    data_1af179c = ecx
else
label_45ec91:
    
    if (data_63e158 != ecx_1 || data_63e154 != i)
        data_63e158 = ecx_1
        data_63e154 = i
    label_45ecdc:
        i = data_1392710
        ecx = 0
        data_641ad4 = i
        data_1af1798 = 0
        data_1af1794 = 0
        data_1af179c = ecx
    else
        if (data_1af1798 != 0)
            goto label_45ecdc
        
        ecx = data_1af179c
        
        if (ecx == 0)
            i = data_1392710 - data_641ad4
            
            if (i u>= 0x2bc || edx != 0)
                ecx = 1
                data_1af179c = ecx

if (data_1321ec4 != 0 || data_1af17a0 != 0 || data_1c054ec != 0)
    if (data_1af4e70 == 0 || data_641ad8 != 0)
        data_1af4e70 = 1
        
        do
            i = ShowCursor(1)
        while (i s<= 0)
        
        data_641ad8 = 0
    else
        data_641ad8 = 0
else if (ecx == 0)
    if (data_7037a0 == 0)
        if (data_1af4e70 == 1 || data_641ad8 != 0)
            data_1af4e70 = 0
            int32_t i_1
            
            do
                i_1 = ShowCursor(0)
            while (i_1 s>= 0)
            
            data_641ad8 = 0
            return i_1
    else if (data_1af4e70 == 0 || data_641ad8 != 0)
        data_1af4e70 = 1
        int32_t i_2
        
        do
            i_2 = ShowCursor(1)
        while (i_2 s<= 0)
        
        data_641ad8 = 0
        return i_2
    
    data_641ad8 = 0
else if (data_1af1794 != 0)
    if (data_1af4e70 == 1 || data_641ad8 == 0)
        data_1af4e70 = 0
        
        do
            i = ShowCursor(0)
        while (i s>= 0)
    
    data_641ad8 = 1
    data_1af1794 = 0

return i
