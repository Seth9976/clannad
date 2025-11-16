// 函数: sub_485a70
// 地址: 0x485a70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t ecx_1 = data_7037c8
int32_t eax = 0
int32_t esi = data_703744

if (ecx_1 != 0 && esi != 0)
    eax = 1

int32_t edx = 0

if (eax != 0 && data_13701d8 == 2)
    edx = 1

int32_t eax_1

if (ecx_1 == 0)
    eax_1 = 0
else if (data_703674 == 0)
    int32_t eax_2 = data_108f354
    
    if (eax_2 == 1)
        if (data_703678 == 2)
            goto label_485aeb
        
        eax_1 = 0
    else if (eax_2 != 2 || data_13132e0 != 0 || data_703678 == eax_2)
    label_485aeb:
        eax_1 = 0
        
        if (data_703740 != 0 && esi != 0)
            eax_1.b = data_1af17b8 != 0
    else
        eax_1 = 0
else
    eax_1 = 0

int32_t ecx_2

if (data_1b14e5c != 0 || eax_1 == 1)
    ecx_2 = 1
else
    ecx_2 = 0

bool cond:0 = data_1af174c != 0
data_1b8a6e0 = ecx_2

if (not(cond:0))
    int32_t eax_3 = 0
    data_131923c = 0
    
    if (ecx_2 != 0 && data_13701dc == 0)
        int32_t esi_1 = data_71929c
        
        if (esi_1 != 0x13)
            if (esi_1 != 0x15)
                eax_3 = 1
            
            data_131923c = eax_3

int32_t eax_4 = 0
data_1b8a6d8 = 0

if (edx != 0 && data_13132d8 != 0)
    if (data_703738 != 0)
        eax_4 = 1
    
    data_1b8a6d8 = eax_4

int32_t esi_2 = data_1af1768
int32_t eax_5 = 0
data_1b8a6d4 = 0

if (ecx_2 == 0)
    if (esi_2 == 0)
        goto label_485b8c
    
    eax_5 = 1
    data_1b8a6d4 = 1
else if (data_1b8a6dc == 0 || esi_2 != 0)
    eax_5 = 1
    data_1b8a6d4 = 1
else
label_485b8c:
    
    if (data_13132c8 == 1 && data_703734 == 1)
        eax_5 = 1
        data_1b8a6d4 = 1

int32_t edi = data_1af1764
data_1b8a6d0 = 0

if (eax_5 != 0 || esi_2 != 0 || edi != 0 || edx != 0)
    data_1b8a6d0 = 1

int32_t eax_6 = 0

if (ecx_2 != 0)
    eax_6 = 1

data_13130bc = eax_6
int32_t eax_7 = 0

if (ecx_2 != 0)
    eax_7 = 1

data_1b8a6f4 = eax_7
int32_t eax_8 = 0

if (ecx_2 != 0)
    eax_8 = 1

data_1b8a6e8 = eax_8
int32_t eax_9 = 0

if (ecx_2 != 0)
    eax_9 = 1

data_1b1bcd8 = eax_9
int32_t eax_10 = 0

if (ecx_2 != 0)
    eax_10 = 1

data_1392700 = eax_10
int32_t result = 0
data_1b8a6ec = 0

if (ecx_2 != 0 || esi_2 != 0 || edi != 0 || data_703670 == 1 || data_70368c == 1)
    result = 1
    data_1b8a6ec = 1

int32_t ecx_3 = data_703680

if (edx != 0 && (ecx_3 == 0 || data_703688 == 1))
    result = 1
    data_1b8a6ec = 1

if (data_1af425c != 0)
    if (ecx_3 == 0)
        result = 1
    
    data_1b8a6ec = result

return result
