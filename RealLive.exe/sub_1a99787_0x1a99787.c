// 函数: sub_1a99787
// 地址: 0x1a99787
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t* ecx = arg5
*ecx = 0
char* esi = arg3
int32_t* edi = arg2
*arg4 = 1
char* eax_1 = arg1

if (edi != 0)
    *edi = esi
    edi = &edi[1]
    arg2 = edi

uint32_t edx

if (*eax_1 != 0x22)
    while (true)
        *ecx += 1
        
        if (esi != 0)
            edx.b = *eax_1
            *esi = edx.b
            esi = &esi[1]
        
        edx.b = *eax_1
        eax_1 = &eax_1[1]
        
        if ((*(zx.d(edx.b) + 0x1c091e1) & 4) != 0)
            *ecx += 1
            
            if (esi != 0)
                uint32_t ebx_1
                ebx_1.b = *eax_1
                *esi = ebx_1.b
                esi = &esi[1]
            
            eax_1 = &eax_1[1]
        
        if (edx.b == 0x20)
        label_1a9982e:
            
            if (edx.b != 0)
                if (esi != 0)
                    esi[0xffffffff] = 0
                
                break
        else if (edx.b != 0)
            if (edx.b == 9)
                goto label_1a9982e
            
            continue
        
        eax_1 -= 1
        break
else
    while (true)
        edx.b = eax_1[1]
        eax_1 = &eax_1[1]
        
        if (edx.b == 0x22)
            break
        
        if (edx.b == 0)
            break
        
        if ((*(zx.d(edx.b) + 0x1c091e1) & 4) != 0)
            *ecx += 1
            
            if (esi != 0)
                edx.b = *eax_1
                *esi = edx.b
                esi = &esi[1]
                eax_1 = &eax_1[1]
        
        *ecx += 1
        
        if (esi != 0)
            edx.b = *eax_1
            *esi = edx.b
            esi = &esi[1]
    
    *ecx += 1
    
    if (esi != 0)
        *esi = 0
        esi = &esi[1]
    
    if (*eax_1 == 0x22)
        eax_1 = &eax_1[1]

arg5 = nullptr

while (*eax_1 != 0)
    while (true)
        edx.b = *eax_1
        
        if (edx.b != 0x20 && edx.b != 9)
            break
        
        eax_1 = &eax_1[1]
    
    if (*eax_1 == 0)
        break
    
    if (edi != 0)
        *edi = esi
        edi = &edi[1]
        arg2 = edi
    
    *arg4 += 1
    
    while (true)
        arg1 = 1
        uint32_t i_2 = 0
        
        while (*eax_1 == 0x5c)
            eax_1 = &eax_1[1]
            i_2 += 1
        
        if (*eax_1 == 0x22)
            if ((i_2.b & 1) == 0)
                if (arg5 == 0 || eax_1[1] != 0x22)
                    arg1 = nullptr
                else
                    eax_1 = &eax_1[1]
                
                edi = arg2
                int32_t* edx_3
                edx_3.b = arg5 == 0
                arg5 = edx_3
            
            i_2 u>>= 1
        
        if (i_2 != 0)
            int32_t i_1 = i_2
            int32_t i
            
            do
                if (esi != 0)
                    *esi = 0x5c
                    esi = &esi[1]
                
                *ecx += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        edx.b = *eax_1
        
        if (edx.b == 0)
            break
        
        if (arg5 == 0)
            if (edx.b == 0x20)
                break
            
            if (edx.b == 9)
                break
        
        if (arg1 != 0)
            if (esi != 0)
                if ((*(zx.d(edx.b) + 0x1c091e1) & 4) != 0)
                    *esi = edx.b
                    esi = &esi[1]
                    eax_1 = &eax_1[1]
                    *ecx += 1
                
                edx.b = *eax_1
                *esi = edx.b
                esi = &esi[1]
            else if ((*(zx.d(edx.b) + 0x1c091e1) & 4) != 0)
                eax_1 = &eax_1[1]
                *ecx += 1
            
            *ecx += 1
        
        eax_1 = &eax_1[1]
    
    if (esi != 0)
        *esi = 0
        esi = &esi[1]
    
    *ecx += 1

if (edi != 0)
    *edi = 0

*arg4 += 1
return arg4
