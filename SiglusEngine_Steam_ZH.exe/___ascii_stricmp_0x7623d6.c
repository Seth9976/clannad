// 函数: ___ascii_stricmp
// 地址: 0x7623d6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg1
char* edi = arg2
uint32_t ecx_1
uint32_t edx_1

do
    ecx_1 = zx.d(*esi)
    esi = &esi[1]
    
    if (ecx_1 - 0x41 u<= 0x19)
        ecx_1 += 0x20
    
    edx_1 = zx.d(*edi)
    edi = &edi[1]
    
    if (edx_1 - 0x41 u<= 0x19)
        edx_1 += 0x20
    
    if (ecx_1 == 0)
        break
while (ecx_1 == edx_1)

return ecx_1 - edx_1
