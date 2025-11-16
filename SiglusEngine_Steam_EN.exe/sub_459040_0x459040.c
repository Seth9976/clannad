// 函数: sub_459040
// 地址: 0x459040
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg1
char* esi = arg2
void* edi = esi
char* eax

if (esi != 0)
    arg2.b = 0x5c
    int32_t eax_1 = sub_4d1610(esi, arg2.b)
    
    if (eax_1 != 0xffffffff)
        edi = &esi[1 + eax_1]
    
    arg2.b = 0x2e
    eax = sub_4d1610(edi, arg2.b)
    
    if (eax == 0xffffffff)
        eax = sub_4cfc80(edi)
        edi -= 1
    
    *(edi + eax) = 0

if (arg1 u<= 3)
    char const* const var_20_1
    
    switch (arg1)
        case 0
            char* var_1c_1 = esi
            var_20_1 = "%s.g00 ( pdt ) "
        case 1
            char* var_1c_2 = esi
            var_20_1 = "%s.m00 "
        case 2
            char* var_1c_3 = esi
            var_20_1 = "%s.g00 "
        case 3
            char* var_1c_4 = esi
            var_20_1 = "%s.pdt "
    
    eax = sub_4c84d0(&data_7027c0, var_20_1)

if (data_702fc0 != 0)
    sub_55f390(
        sub_55f1e0(sub_55ef70(eax, data_72d6ac, data_719b6c, 0x613340, &data_7027c0), data_72d6ac, 
            data_719b6c, 0x613340, &data_7027c0), 
        data_72d6ac, data_719b6c, 0x613340, &data_7027c0)
    sub_4a1e40(3)
    
    if (data_702fc0 != 0 || data_641ad0 s< 6)
        MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
        data_641ad0 += 1
else if (data_641ad0 s< 6)
    MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
    data_641ad0 += 1
