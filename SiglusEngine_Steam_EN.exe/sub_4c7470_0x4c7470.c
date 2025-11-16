// 函数: sub_4c7470
// 地址: 0x4c7470
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg8

if (edi s>= arg2)
    return 

int32_t esi_1 = arg9

if (esi_1 s>= arg4)
    return 

int32_t var_c_1
int32_t j_2

if (edi s>= 0)
    var_c_1 = 0
    j_2 = arg6
else
    j_2 = arg6 + edi
    int32_t eax_1 = neg.d(edi)
    edi = 0
    var_c_1 = eax_1

arg1 = arg2 - edi

if (arg1 s< j_2)
    j_2 = arg1

if (j_2 s<= 0)
    return 

int32_t var_8_1
int32_t i_3

if (esi_1 s>= 0)
    var_8_1 = 0
    i_3 = arg7
else
    var_8_1 = neg.d(esi_1)
    i_3 = arg7 + esi_1
    esi_1 = 0

int32_t i_2 = i_3
int32_t i_4 = arg4 - esi_1

if (i_4 s< i_2)
    i_2 = i_4

arg8 = i_2

if (i_2 s<= 0)
    return 

int32_t* edi_1 = arg3 + ((esi_1 * arg2 + edi) << 2)
char* esi_4 = &arg5[var_8_1 * arg6 + var_c_1]
int32_t ebx_2
ebx_2:1.b = 0xff
arg1:1.b = arg11
ebx_2.b = arg10
arg1.b = arg12
int32_t ebx_3
ebx_3.w = arg1.w
int32_t i_1 = i_2
int32_t i

do
    int32_t j_1 = j_2
    int32_t j
    
    do
        arg1.b = *esi_4
        esi_4 = &esi_4[1]
        arg1.b = arg1.b
        
        if (arg1.b != 0)
            *edi_1 = ebx_3
        
        edi_1 = &edi_1[1]
        j = j_1
        j_1 -= 1
    while (j != 1)
    edi_1 = &edi_1[arg2 - j_2]
    esi_4 = &esi_4[arg6 - j_2]
    i = i_1
    i_1 -= 1
while (i != 1)
