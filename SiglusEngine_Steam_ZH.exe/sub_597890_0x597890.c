// 函数: sub_597890
// 地址: 0x597890
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = nullptr

if (arg2 != 0)
    if (arg2 u<= 0xffffffff)
        esi = sub_745f3f(arg2)
    
    if (arg2 u> 0xffffffff || esi == 0)
        sub_743132()
        noreturn

int32_t* ecx = *arg1
_memcpy(esi, ecx, arg1[1] - ecx)
int32_t eax_4 = *arg1
uint32_t ecx_2 = arg1[1] - eax_4

if (eax_4 != 0)
    j__free(eax_4)

*arg1 = esi
arg1[2] = esi + arg2
void* result = esi + ecx_2
arg1[1] = result
return result
