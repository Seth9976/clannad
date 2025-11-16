// 函数: sub_99c590
// 地址: 0x99c590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* ebx = arg1

if (ebx == 0)
    return 

void* eax_1 = *(ebx + 4)
void* var_8_1 = eax_1
void* const edi_1

if (eax_1 == 0)
    edi_1 = nullptr
else
    edi_1 = *(eax_1 + 0x1c)

int32_t* esi_1 = *(ebx + 0x68)

if (esi_1 != 0)
    char* ecx_1 = *esi_1
    
    if (ecx_1 != 0)
        sub_9a3ad0(ecx_1)
        _free(*esi_1)
    
    int32_t* ecx_2 = esi_1[3]
    
    if (ecx_2 != 0)
        sub_9a51e0(*ecx_2)
        _free(*esi_1[3])
        _free(esi_1[3])
    
    int32_t* ecx_4 = esi_1[4]
    
    if (ecx_4 != 0)
        sub_9a51e0(*ecx_4)
        _free(*esi_1[4])
        _free(esi_1[4])
    
    if (esi_1[0xc] != 0)
        if (edi_1 != 0 && *(edi_1 + 0x10) s> 0)
            int32_t i = 0
            
            do
                (*(&data_adde08)[*(edi_1 + (i << 2) + 0x320)])[4](*(esi_1[0xc] + (i << 2)))
                i += 1
            while (i s< *(edi_1 + 0x10))
            
            ebx = arg1
        
        _free(esi_1[0xc])
    
    if (esi_1[0xd] != 0)
        if (edi_1 != 0 && *(edi_1 + 0x14) s> 0)
            int32_t i_1 = 0
            
            do
                (*((&data_addf44)[*(edi_1 + (i_1 << 2) + 0x520)] + 0x10))(
                    *(esi_1[0xd] + (i_1 << 2)))
                i_1 += 1
            while (i_1 s< *(edi_1 + 0x14))
            
            ebx = arg1
        
        _free(esi_1[0xd])
    
    if (esi_1[0xe] != 0)
        if (edi_1 != 0)
            int32_t i_4 = 0
            
            if (*(edi_1 + 0x1c) s> 0)
                int32_t ebx_1 = 0
                int32_t i_2
                
                do
                    sub_9a1690(esi_1[0xe] + ebx_1)
                    ebx_1 += 0x34
                    i_2 = i_4 + 1
                    i_4 = i_2
                while (i_2 s< *(edi_1 + 0x1c))
                ebx = arg1
        
        _free(esi_1[0xe])
    
    int32_t eax_11 = esi_1[0xf]
    
    if (eax_11 != 0)
        __builtin_memset(eax_11, 0, 0x24)
        _free(eax_11)
    
    _memset(&esi_1[0x14], 0, 0x30)
    
    if (esi_1 != 0xffffffec)
        int32_t eax_13 = esi_1[6]
        
        if (eax_13 != 0)
            _free(eax_13)
        
        int32_t eax_14 = esi_1[7]
        
        if (eax_14 != 0)
            _free(eax_14)
        
        *(esi_1 + 0x14) = 0
        esi_1[7] = 0
    
    if (esi_1 != 0xffffffe0)
        int32_t eax_15 = esi_1[9]
        
        if (eax_15 != 0)
            _free(eax_15)
        
        int32_t eax_16 = esi_1[0xa]
        
        if (eax_16 != 0)
            _free(eax_16)
        
        *(esi_1 + 0x20) = 0
        esi_1[0xa] = 0
    
    eax_1 = var_8_1

if (*(ebx + 8) != 0)
    if (eax_1 != 0)
        int32_t i_3 = 0
        
        if (*(eax_1 + 4) s> 0)
            do
                int32_t eax_18 = *(*(ebx + 8) + (i_3 << 2))
                
                if (eax_18 != 0)
                    _free(eax_18)
                
                i_3 += 1
            while (i_3 s< *(var_8_1 + 4))
    
    _free(*(ebx + 8))
    int32_t eax_19 = *(ebx + 0xc)
    
    if (eax_19 != 0)
        _free(eax_19)

if (esi_1 != 0)
    int32_t eax_20 = esi_1[0x10]
    
    if (eax_20 != 0)
        _free(eax_20)
    
    int32_t eax_21 = esi_1[0x11]
    
    if (eax_21 != 0)
        _free(eax_21)
    
    int32_t eax_22 = esi_1[0x12]
    
    if (eax_22 != 0)
        _free(eax_22)
    
    _free(esi_1)

_memset(ebx, 0, 0x70)
