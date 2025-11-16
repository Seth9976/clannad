// 函数: sub_4fc2f0
// 地址: 0x4fc2f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx
int32_t* var_4 = ecx
int32_t eax = data_1bfdd30

if (eax != 0)
    if (eax == 1)
        data_1af1738 = 1
        data_71929c = 1
        data_7192a0 = 0
        data_7192e0 = 0
        return eax - 1
    
    data_1b8b06c = 1
    return eax - 1

if (data_1af174c == 0)
    data_71929c = 5
    data_7192a0 = 0
    data_7192e0 = 0
    return eax

int32_t eax_3 = data_f89940
data_715e98 = eax_3
int32_t* edx
char* eax_4 = sub_490110(eax_3, edx, ecx, 4)
data_1af174c = 0
data_1b8be80 = 1
data_703004 = 0
return eax_4
