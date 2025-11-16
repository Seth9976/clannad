// 函数: sub_5cf6f0
// 地址: 0x5cf6f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
void* var_14 = esi

if (*(esi + 0x138) == 0 || *data_bac458 != 0x11)
    return 

int32_t i_2 = 0

if (*(esi + 0x108) s> 0)
    int32_t edi_1 = arg2
    int32_t edx_1 = 0
    int32_t var_c_1 = 0
    int32_t i
    
    do
        void* esi_3 = *(esi + 0x10c) + 0x21c + edx_1
        
        if (*(esi_3 + 0xa1) != 0)
            void* eax_1 = sub_5f3d30(esi_3)
            
            if (eax_1 != 0 && *(eax_1 + 0x140) != 0 && *(eax_1 + 0x141) == 0)
                goto label_5cf77f
        else if (*(esi_3 + 0x2ac) s>= 0)
        label_5cf77f:
            
            if (*(esi_3 + 0x15cc) s>= edi_1)
                void* ecx_1 = data_bac4e8
                int32_t var_10 = esi_3 + 0x159c
                sub_530ba0(ecx_1 + 0x2c, &var_10)
        
        int32_t j_1 = (*(esi_3 + 0x1438) - *(esi_3 + 0x1434)) s/ 0x15fc
        
        if (j_1 s> 0)
            int32_t edi_2 = 0
            int32_t j
            
            do
                sub_5f3590(*(esi_3 + 0x1434) + edi_2, arg2)
                edi_2 += 0x15fc
                j = j_1
                j_1 -= 1
            while (j != 1)
            edi_1 = arg2
        
        esi = var_14
        i = i_2 + 1
        edx_1 = var_c_1 + 0x2e60
        i_2 = i
        var_c_1 = edx_1
    while (i s< *(esi + 0x108))

int32_t i_1 = 0

if (*(esi + 0x108) s> 0)
    int32_t ecx_8 = 0
    int32_t var_c_2 = 0
    
    do
        sub_5f3590(ecx_8 + 0x1818 + *(esi + 0x10c), arg2)
        i_1 += 1
        ecx_8 = var_c_2 + 0x2e60
        var_c_2 = ecx_8
    while (i_1 s< *(esi + 0x108))

sub_5f3590(esi + 0x418, arg2)
sub_5f3590(esi + 0x1a14, arg2)
sub_5f3590(esi + 0x3010, arg2)
sub_5f3590(esi + 0x460c, arg2)
sub_5f3590(esi + 0x5c08, arg2)
sub_5f3590(esi + 0x7204, arg2)
sub_5f3590(esi + 0x8800, arg2)
sub_5f3590(esi + 0x9dfc, arg2)
