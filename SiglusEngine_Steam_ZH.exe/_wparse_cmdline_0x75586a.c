// 函数: _wparse_cmdline
// 地址: 0x75586a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int16_t* ecx_1 = arg1
int16_t* edx = arg3
int32_t* esi = arg2
int32_t edi = 0
*arg5 = 0
*arg4 = 1

if (esi != 0)
    *esi = edx
    esi = &esi[1]
    arg2 = esi

arg1 = 0x20
int32_t var_8_1 = 9

while (true)
    int16_t eax_3
    
    if (*ecx_1 != 0x22)
        *arg5 += 1
        
        if (edx != 0)
            *edx = *ecx_1
            edx = &edx[1]
        
        eax_3 = *ecx_1
        ecx_1 = &ecx_1[1]
        
        if (eax_3 == 0)
            ecx_1 -= 2
            break
    else
        int32_t eax_2
        eax_2.b = edi == 0
        ecx_1 = &ecx_1[1]
        edi = eax_2
        eax_3 = 0x22
    
    if (edi == 0)
        if (eax_3 != 0x20 && eax_3 != 9)
            continue
        
        if (edx == 0)
            break
        
        edx[-1] = 0
        break

int32_t* edi_1 = arg5
uint32_t i = 0
int32_t var_c_1 = 0

while (*ecx_1 != 0)
    while (true)
        int16_t eax_4 = *ecx_1
        
        if (eax_4 != 0x20 && eax_4 != 9)
            break
        
        ecx_1 = &ecx_1[1]
    
    if (*ecx_1 == 0)
        break
    
    if (esi != 0)
        *esi = edx
        arg2 = &esi[1]
    
    int32_t esi_2 = var_c_1
    *arg4 += 1
    
    while (true)
        int32_t var_c_2 = 1
        
        while (*ecx_1 == 0x5c)
            ecx_1 = &ecx_1[1]
            i += 1
        
        if (*ecx_1 == 0x22)
            if ((i.b & 1) == 0)
                if (esi_2 != 0)
                    edi_1 = arg5
                
                if (esi_2 == 0 || ecx_1[1] != 0x22)
                    var_c_2 = 0
                    int32_t eax_6
                    eax_6.b = esi_2 == 0
                    esi_2 = eax_6
                else
                    ecx_1 = &ecx_1[1]
            
            i u>>= 1
        
        while (i != 0)
            i -= 1
            
            if (edx != 0)
                *edx = 0x5c
                edx = &edx[1]
            
            *edi_1 += 1
        
        int16_t eax_7 = *ecx_1
        
        if (eax_7 == 0)
            break
        
        if (esi_2 == 0)
            if (eax_7 == 0x20)
                break
            
            if (eax_7 == 9)
                break
        
        if (var_c_2 != 0)
            if (edx != 0)
                *edx = eax_7
                edx = &edx[1]
            
            *edi_1 += 1
        
        ecx_1 = &ecx_1[1]
        i = 0
    
    var_c_1 = esi_2
    esi = arg2
    
    if (edx != 0)
        *edx = 0
        edx = &edx[1]
    
    *edi_1 += 1
    i = 0

if (esi != 0)
    *esi = 0

*arg4 += 1
return arg4
