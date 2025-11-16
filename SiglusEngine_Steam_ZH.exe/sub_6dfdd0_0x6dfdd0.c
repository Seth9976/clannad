// 函数: sub_6dfdd0
// 地址: 0x6dfdd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = nullptr

if (arg1 != 0)
    if (arg1 u<= 0x3fffffff)
        esi = sub_745f3f(arg1 << 2)
    
    if (arg1 u> 0x3fffffff || esi == 0)
        sub_743132()
        noreturn

int32_t* ecx = data_4ebe300
_memcpy(esi, ecx, (data_4ebe304 - ecx) & 0xfffffffc)
int32_t ecx_1 = data_4ebe300
int32_t eax_8 = (data_4ebe304 - ecx_1) s>> 2

if (ecx_1 != 0)
    j__free(ecx_1)

data_4ebe300 = esi
data_4ebe308 = &esi[arg1]
void* result = &esi[eax_8]
data_4ebe304 = result
return result
