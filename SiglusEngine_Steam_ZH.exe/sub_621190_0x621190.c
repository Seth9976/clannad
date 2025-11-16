// 函数: sub_621190
// 地址: 0x621190
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void arg_4
sub_6218d0(&arg_4)
void* esi = data_bac4dc
int128_t arg_c
int128_t* __saved_edi_2 = &arg_c
int32_t eax = *(esi + 0x10)

if (&arg_c u< eax)
    __saved_edi_2 = *(esi + 0xc)
    
    if (__saved_edi_2 u<= &arg_c)
        if (eax == *(esi + 0x14))
            int128_t* __saved_edi_3 = __saved_edi_2
            sub_621950(esi + 0xc)
        
        int128_t* eax_1 = *(esi + 0x10)
        
        if (eax_1 != 0)
            *eax_1 = *(((&arg_c - __saved_edi_2) & 0xfffffff0) + *(esi + 0xc))
        
        *(esi + 0x10) += 0x10
        return eax_1

if (eax == *(esi + 0x14))
    int128_t* __saved_edi_1 = __saved_edi_2
    sub_621950(esi + 0xc)

int128_t* eax_2 = *(esi + 0x10)

if (eax_2 != 0)
    *eax_2 = arg_c

*(esi + 0x10) += 0x10
return eax_2
