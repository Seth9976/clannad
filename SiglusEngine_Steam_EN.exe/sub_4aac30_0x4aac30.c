// 函数: sub_4aac30
// 地址: 0x4aac30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = data_703064
int32_t esi = data_70305c

if (esi s> ebx)
    int32_t eax = esi
    esi = ebx
    ebx = eax

int32_t ecx = data_703060
int32_t eax_1 = data_703068

if (ecx s> eax_1)
    eax_1 = ecx
    ecx = data_703068

int32_t edi = data_7030ac
int32_t edx = data_7030b4

if (esi s< edi)
    esi = edi
else if (esi s> edx)
    esi = edx

int32_t edx_1 = data_7030b0
data_70305c = esi

if (ecx s< edx_1)
    ecx = edx_1
else if (ecx s> data_7030b8)
    ecx = data_7030b8

data_703060 = ecx

if (ebx s>= edi)
    edi = ebx
    
    if (ebx s> data_7030b4)
        edi = data_7030b4

data_703064 = edi

if (eax_1 s>= edx_1)
    edx_1 = eax_1
    
    if (eax_1 s> data_7030b8)
        edx_1 = data_7030b8

data_703068 = edx_1
*arg3 = esi
*arg2 = ecx
*arg4 = edi
*arg5 = edx_1
return arg5
