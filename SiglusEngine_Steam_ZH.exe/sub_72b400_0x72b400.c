// 函数: sub_72b400
// 地址: 0x72b400
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1[6]
void** var_8 = arg1
char* edi = *ebx
int32_t esi = ebx[1]
uint32_t i_1

while (true)
    if (esi == 0)
        if (ebx[3](arg1) == 0)
            return 0
        
        edi = *ebx
        esi = ebx[1]
        arg1 = var_8
    
    uint32_t eax_3 = zx.d(*edi)
    esi -= 1
    edi = &edi[1]
    
    if (eax_3 != 0xff)
        uint32_t i
        
        do
            void* eax_4 = arg1[0x6b]
            *(eax_4 + 0x14) += 1
            *ebx = edi
            ebx[1] = esi
            
            if (esi == 0)
                if (ebx[3](arg1) == 0)
                    return 0
                
                edi = *ebx
                esi = ebx[1]
                arg1 = var_8
            
            i = zx.d(*edi)
            esi -= 1
            edi = &edi[1]
        while (i != 0xff)
    
    do
        if (esi == 0)
            if (ebx[3](arg1) == 0)
                return 0
            
            edi = *ebx
            esi = ebx[1]
        
        i_1 = zx.d(*edi)
        esi -= 1
        arg1 = var_8
        edi = &edi[1]
    while (i_1 == 0xff)
    
    if (i_1 != 0)
        break
    
    void* eax_7 = arg1[0x6b]
    *(eax_7 + 0x14) += 2
    *ebx = edi
    ebx[1] = esi

void** edx = arg1

if (*(edx[0x6b] + 0x14) != 0)
    *(*edx + 0x14) = 0x77
    *(*edx + 0x18) = *(edx[0x6b] + 0x14)
    *(*edx + 0x1c) = i_1
    (*(*edx + 4))(edx, 0xffffffff)
    edx = var_8
    *(edx[0x6b] + 0x14) = 0

edx[0x65] = i_1
uint32_t result
result.b = 1
*ebx = edi
ebx[1] = esi
return result
