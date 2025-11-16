// 函数: sub_4cfcc0
// 地址: 0x4cfcc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi

if (arg4 == 0)
    esi = 0
else
    esi = sub_4cfc80(arg4) - 1

int32_t edi

if (arg5 == 0)
    edi = 0
else
    edi = sub_4cfc80(arg5) - 1

uint32_t eax_4 = esi + 1 + edi
sub_4d6960(eax_4, arg2, arg3, eax_4, "AVG_STR_ADD_TMP")
char* edx_1 = *arg2
char* ecx_3

if (esi s> 0)
    ecx_3 = nullptr
    
    if (esi s> 0)
        do
            void** eax_5
            eax_5.b = *(ecx_3 + arg4)
            *(ecx_3 + edx_1) = eax_5.b
            ecx_3 = &ecx_3[1]
        while (ecx_3 s< esi)

if (edi s> 0)
    char* edx_2 = nullptr
    
    if (edi s> 0)
        do
            ecx_3.b = *(edx_2 + arg5)
            *(&edx_1[esi] + edx_2) = ecx_3.b
            edx_2 = &edx_2[1]
        while (edx_2 s< edi)

edx_1[edi + esi] = 0
return esi + 1 + edi
