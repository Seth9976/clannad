// 函数: sub_460c30
// 地址: 0x460c30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = data_1af4e94

if (arg2 s> edx)
    return 

int32_t eax = data_108fec0
data_1357100 = 0

if (arg5 == 0)
    eax = 0

data_13570fc = 0
bool cond:1_1 = data_71929c != 0x22
data_135702c = 0
data_1357028 = 0
int32_t eax_2

if (cond:1_1)
    eax_2.b = data_131923c == 0
else if (data_1af17c0 == 0 || arg2 s<= 0 || arg2 s>= edx - 1)
    eax_2 = 1
else
    eax_2 = 0

void* ecx = &data_8fcadc
int32_t var_c_1 = eax_2
void* edx_1 = &data_f89afc
void* var_18_1 = &data_8fcadc
void* var_1c_1 = &data_f89afc
int32_t i = 0
int32_t* var_10_1 = &data_1090ae4
void* var_14_1 = &data_1b142a0
data_1cd5369 = 0

do
    data_1cd5368 = 0
    int32_t var_3c_1 = ecx
    ecx.b = arg3
    sub_460a90(eax_2, arg2, ecx.b, arg4, arg5, eax, eax_2, i, var_3c_1, edx_1, var_10_1, var_14_1)
    char eax_3 = data_1cd5369
    
    if (data_1cd5368 != 0)
        eax_3 = 1
    
    var_10_1 = &var_10_1[0x75]
    ecx = var_18_1 + 0x2d0
    var_14_1 += 8
    edx_1 = var_1c_1 + 0x3920
    i += 1
    data_1cd5369 = eax_3
    eax_2 = var_c_1
    var_18_1 = ecx
    var_1c_1 = edx_1
while (i s< 0x40)

arg1 = data_13570fc

if (arg1 u>= 0x19000)
    ___report_rangecheckfailure()
    noreturn

(&data_1357100)[arg1] = 0
