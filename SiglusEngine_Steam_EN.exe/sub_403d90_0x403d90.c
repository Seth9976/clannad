// 函数: sub_403d90
// 地址: 0x403d90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ecx
void* var_4 = ecx
void* edi = arg1

if (edi == 0)
    return 

void* ecx_1 = *(edi + 4)
var_4 = ecx_1
void* const ebp_1

if (ecx_1 == 0)
    ebp_1 = nullptr
else
    ebp_1 = *(ecx_1 + 0x1c)

int32_t* esi_1 = *(edi + 0x68)

if (esi_1 != 0)
    void* eax_1 = *esi_1
    
    if (eax_1 != 0)
        sub_408a00(eax_1)
        _free(*esi_1)
    
    int32_t* eax_3 = esi_1[3]
    
    if (eax_3 != 0)
        sub_40a230(*eax_3)
        _free(*esi_1[3])
        _free(esi_1[3])
    
    int32_t* eax_5 = esi_1[4]
    
    if (eax_5 != 0)
        sub_40a230(*eax_5)
        _free(*esi_1[4])
        _free(esi_1[4])
    
    if (esi_1[0xc] != 0)
        int32_t i = 0
        
        if (*(ebp_1 + 0x10) s> 0)
            void* edi_1 = ebp_1 + 0x320
            
            do
                (*((&data_632fc0)[*edi_1] + 0x10))(*(esi_1[0xc] + (i << 2)))
                i += 1
                edi_1 += 4
            while (i s< *(ebp_1 + 0x10))
        
        _free(esi_1[0xc])
        edi = arg1
    
    if (esi_1[0xd] != 0)
        int32_t i_1 = 0
        
        if (*(ebp_1 + 0x14) s> 0)
            void* edi_2 = ebp_1 + 0x520
            
            do
                (*((&data_632fc8)[*edi_2] + 0x10))(*(esi_1[0xd] + (i_1 << 2)))
                i_1 += 1
                edi_2 += 4
            while (i_1 s< *(ebp_1 + 0x14))
        
        _free(esi_1[0xd])
        edi = arg1
    
    if (esi_1[0xe] != 0)
        int32_t i_2 = 0
        
        if (*(ebp_1 + 0x1c) s> 0)
            void* edi_3 = nullptr
            
            do
                sub_4057c0(edi_3 + esi_1[0xe])
                i_2 += 1
                edi_3 += 0x34
            while (i_2 s< *(ebp_1 + 0x1c))
        
        _free(esi_1[0xe])
        edi = arg1
    
    int32_t eax_21 = esi_1[0xf]
    
    if (eax_21 != 0)
        sub_4049f0(eax_21)
    
    sub_4089d0(&esi_1[0x14])
    sub_40a010(&esi_1[5])
    sub_40a010(&esi_1[8])
    ecx_1 = var_4

if (*(edi + 8) != 0)
    int32_t i_3 = 0
    
    if (*(ecx_1 + 4) s> 0)
        do
            int32_t eax_26 = *(*(edi + 8) + (i_3 << 2))
            
            if (eax_26 != 0)
                _free(eax_26)
                ecx_1 = var_4
            
            i_3 += 1
        while (i_3 s< *(ecx_1 + 4))
    
    _free(*(edi + 8))
    int32_t eax_28 = *(edi + 0xc)
    
    if (eax_28 != 0)
        _free(eax_28)

if (esi_1 != 0)
    int32_t eax_29 = esi_1[0x10]
    
    if (eax_29 != 0)
        _free(eax_29)
    
    int32_t eax_30 = esi_1[0x11]
    
    if (eax_30 != 0)
        _free(eax_30)
    
    int32_t eax_31 = esi_1[0x12]
    
    if (eax_31 != 0)
        _free(eax_31)
    
    _free(esi_1)

__builtin_memset(edi, 0, 0x70)
