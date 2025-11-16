// 函数: sub_47e0d9
// 地址: 0x47e0d9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg1
int32_t edi
int32_t var_c = edi
int32_t edi_1 = 0

if (esi != 0)
    uint32_t eax
    eax.b = *esi
    
    if (eax.b != 0)
        do
            edi_1 = edi_1 * 0x13 + _toupper(sx.d(eax.b))
            esi = &esi[1]
            eax.b = *esi
        while (eax.b != 0)
        
        return modu.dp.d(0:edi_1, 7)

return 0
