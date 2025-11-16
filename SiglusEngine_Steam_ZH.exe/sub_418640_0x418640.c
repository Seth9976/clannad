// 函数: sub_418640
// 地址: 0x418640
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0

if (arg2 == 0)
    return 0x80070057

char* edx_1 = arg1
char* esi_1 = arg3
int32_t i

do
    char ecx = *esi_1
    
    if (ecx == 0)
        break
    
    *edx_1 = ecx
    edx_1 = &edx_1[1]
    esi_1 = &esi_1[1]
    i = arg2
    arg2 -= 1
while (i != 1)

if (arg2 == 0)
    edx_1 -= 1
    result = 0x8007007a

*edx_1 = 0
return result
