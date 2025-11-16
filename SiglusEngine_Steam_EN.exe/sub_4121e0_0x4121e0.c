// 函数: sub_4121e0
// 地址: 0x4121e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg1
char* ebx = arg2
void* edi = ebx
char* eax

if (ebx != 0)
    arg2.b = 0x5c
    int32_t eax_1 = sub_4d1610(ebx, arg2.b)
    
    if (eax_1 != 0xffffffff)
        edi = &ebx[1 + eax_1]
    
    arg2.b = 0x2e
    eax = sub_4d1610(edi, arg2.b)
    
    if (eax == 0xffffffff)
        eax = sub_4cfc80(edi)
        edi -= 1
    
    *(edi + eax) = 0

if (arg1 == 0)
    char* var_1c_3 = ebx
    eax = sub_4c84d0(&data_7027c0, "%s.g00 ( pdt ) ")
else if (arg1 == 1)
    char* var_1c_2 = ebx
    eax = sub_4c84d0(&data_7027c0, "%s.g00 ")
else if (arg1 == 2)
    char* var_1c_1 = ebx
    eax = sub_4c84d0(&data_7027c0, "%s.pdt ")

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
