// 函数: sub_42fad0
// 地址: 0x42fad0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* esi = arg2
int32_t eax = *(esi + 4)
int32_t edi
int32_t var_14 = edi
int32_t var_8_1 = 0

if (eax != 1)
    if (eax == 8)
        int32_t* ebx_2 = arg4
        int32_t* edi_8 = arg3
        arg2 = nullptr
        
        if (*(esi + 0x14) u> 0)
            do
                int32_t eax_27 = sub_42fad0(arg1, *(esi + 0x10), edi_8, ebx_2)
                var_8_1 = eax_27
                
                if (eax_27 s< 0)
                    return var_8_1
                
                arg2 += 1
            while (arg2 u< *(esi + 0x14))
        
        *ebx_2 *= *(esi + 0x14) * *edi_8
        *edi_8 = 1
    else
        if (eax != 9)
            return 0x80004005
        
        int32_t eax_4 = *(esi + 0x10)
        
        if (eax_4 s< 0)
            return 0x80004005
        
        int32_t eax_5
        int32_t* edx_1
        
        if (eax_4 s<= 2)
            edx_1 = arg3
            *edx_1 = *(esi + 0x18)
            eax_5 = *(esi + 0x1c)
        else
            if (eax_4 != 3)
                return 0x80004005
            
            edx_1 = arg3
            eax_5 = 1
            *edx_1 = 1
        
        int32_t* ebx_1 = arg4
        *ebx_1 = eax_5
        bool cond:3_1 = *edx_1 * *ebx_1 u<= 0
        arg3 = nullptr
        
        if (not(cond:3_1))
            while (true)
                int32_t* edi_3 = *(*arg1 + 8) + 0x10
                *edi_3 = 0
                void* edi_4 = &edi_3[1]
                *edi_4 = 0
                void* edi_5 = edi_4 + 4
                *edi_5 = 0
                *(edi_5 + 4) = 0
                int32_t eax_9 = *(esi + 0x14)
                
                if (eax_9 u> 0x1d)
                    return 0x80004005
                
                switch (eax_9)
                    case 0
                        *(*(*arg1 + 8) + 0x10) = 0
                    case 1, 2, 3, 4
                        *(*(*arg1 + 8) + 0x10) = 1
                    case 5, 6, 7, 8
                        *(*(*arg1 + 8) + 0x10) = 2
                    case 9, 0xa, 0xb, 0xc
                        *(*(*arg1 + 8) + 0x10) = 3
                    case 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x19, 0x1a, 0x1b, 0x1c
                        *(*(*arg1 + 8) + 0x10) = 5
                    case 0x14, 0x15, 0x16, 0x17, 0x18, 0x1d
                        *(*(*arg1 + 8) + 0x10) = 4
                
                int32_t eax_24 = *(*arg1 + 0xc)
                arg3 += 1
                *arg1 = eax_24
                
                if (arg3 u>= *edx_1 * *ebx_1)
                    return var_8_1
    
    return var_8_1

int32_t* edi_9 = arg4
*arg3 = 1
*edi_9 = 0

while (true)
    if (*(esi + 4) != 1)
        return 0x80004005
    
    void* eax_33 = *(esi + 8)
    
    if (eax_33 == 0)
        return 0x80004005
    
    if (*(eax_33 + 4) != 6)
        return 0x80004005
    
    if (*(eax_33 + 0x10) != 1)
        return 0x80004005
    
    void* eax_34 = *(eax_33 + 0x18)
    
    if (eax_34 == 0)
        return 0x80004005
    
    if (*(eax_34 + 4) != 0xb)
        return 0x80004005
    
    int32_t eax_35 = *(eax_34 + 0x20)
    
    if (eax_35 == 0)
        return 0x80004005
    
    int32_t eax_36 = sub_42fad0(arg1, eax_35, &arg3, &arg4)
    
    if (eax_36 s< 0)
        return eax_36
    
    *edi_9 += arg3 * arg4
    esi = *(esi + 0xc)
    
    if (esi == 0)
        return eax_36
