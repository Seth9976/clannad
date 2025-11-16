// 函数: sub_5f2b00
// 地址: 0x5f2b00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg4
int32_t eax = arg2
int32_t* esi = arg6
int32_t* edi = arg3
int32_t var_8 = eax
int32_t* var_c = edi

if (edi != eax && ebx != arg5)
    while (true)
        if (arg7(*ebx, *edi) == 0)
            int32_t eax_9 = *edi
            edi = &edi[1]
            *esi = eax_9
            esi = &esi[1]
            eax = var_8
            var_c = edi
            
            if (edi == eax)
                break
        else
            int32_t eax_2 = *ebx
            ebx = &ebx[1]
            *esi = eax_2
            esi = &esi[1]
            
            if (ebx == arg5)
                eax = var_8
                break

_memcpy(esi, var_c, (eax - edi) s>> 2 << 2)
void* esi_1 = &esi[(eax - edi) s>> 2]
void* edi_2 = (arg5 - ebx) s>> 2 << 2
_memcpy(esi_1, ebx, edi_2)
return edi_2 + esi_1
