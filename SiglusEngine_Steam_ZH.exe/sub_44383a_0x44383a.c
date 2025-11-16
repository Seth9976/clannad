// 函数: sub_44383a
// 地址: 0x44383a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x20)
int32_t edi
int32_t var_10 = edi
int32_t edi_1 = *(arg1 + 0x1c)
int32_t result = sbb.d(eax + arg2 + 4, eax + arg2 + 4, edi_1 + eax u< eax + arg2 + 4) & 0x80004005

if (result s>= 0)
    int32_t* esi_1 = *(arg1 + 0x20)
    int32_t esi_2 = *(esi_1 + arg2)
    
    if (esi_2 != 0)
        void* ecx = *(arg1 + 0x20)
        void* eax_4 = ecx + esi_2 + &arg2[1]
        result = sbb.d(eax_4, eax_4, ecx + edi_1 u< eax_4) & 0x80004005
        
        if (result s>= 0 && *(esi_1 + esi_2 + &arg2[1] - 1) != 0)
            return 0x80004005

return result
