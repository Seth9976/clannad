// 函数: sub_484690
// 地址: 0x484690
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1af1764

if (eax != 0)
    if (data_71929c != 4)
        eax = 0
    
    data_1af1764 = eax

int32_t edi = 0
int32_t var_8 = 0
int32_t esi

if (data_7035a0 == 0 || data_108f364 == 0)
    esi = 0
else
    esi = 1

int32_t eax_1 = data_1af177c

if (eax_1 == 1)
    data_1af177c = 2
else if (eax_1 != 2)
    sub_4845e0(esi, &var_8)
    edi = var_8
else
    int32_t eax_2 = data_1af1778
    
    if (eax_2 == 0)
        if (esi != 0)
            sub_484550()
            data_1af177c = 0
        else
            sub_45c070(data_1af1770)
            data_1af177c = 0
    else if (eax_2 - 1 u> 2)
        data_1af177c = 0
    else
        sub_4844a0(1)
        data_1af177c = 0

int32_t eax_4 = data_1af1774

if (eax_4 != 0xffffffff)
    data_1af1778 = eax_4
    data_1af1774 = 0xffffffff
    
    if (eax_4 == 0)
        if (esi != 0)
            sub_484550()
        else
            sub_45c070(0)
    else if (eax_4 - 1 u<= 2)
        sub_4844a0(1)

int32_t result = data_1af1760
data_1af1744 = 1
data_1af176c = edi
data_1af1770 = 0
data_1372c14 = 0

if (result == 1)
    data_1af1760 = 2
    return result

if (result == 2)
    result = 0

data_1af1760 = result
return result
