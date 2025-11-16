// 函数: sub_497270
// 地址: 0x497270
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* edi = arg2
*edi = 0

if (arg1[0xc9] != 1)
    if (*arg1 != 0 && arg1[1].b != 0)
        void* var_c_2 = &arg1[1]
        sub_4c84d0(edi, &data_613a1c)
        edi = edi - 1 + sub_4cfc80(edi)
else if (*arg1 != 0 && arg1[1].b != 0)
    void* var_c_1 = &arg1[1]
    sub_4c84d0(edi, &data_61af98)
    edi = edi - 1 + sub_4cfc80(edi)

if (arg1[0x45] s> 1)
    void* var_c_3 = &arg1[0x46]
    sub_4c84d0(edi, "%s")
