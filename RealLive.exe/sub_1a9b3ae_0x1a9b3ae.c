// 函数: sub_1a9b3ae
// 地址: 0x1a9b3ae
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t result = 0
char* edi = arg1
int32_t ebx
ebx.b = *edi
void* esi = &edi[1]
void* var_8 = esi

while (true)
    BOOL eax_2
    wchar16 (* ecx)[0x21]
    
    if (data_1bfc3ac s<= 1)
        ecx = data_1bfc1a0
        uint32_t eax_3
        eax_3.b = (*ecx)[zx.d(ebx.b)].b
        eax_2 = eax_3 & 8
    else
        uint32_t eax_1 = zx.d(ebx.b)
        int32_t edx
        eax_2, edx = sub_1a981ac(eax_1, edx, ecx, eax_1)
        ecx = 8
    
    if (eax_2 == 0)
        break
    
    ebx.b = *esi
    esi += 1

void* var_8_1 = esi

if (ebx.b == 0x2d)
    arg4 |= 2
label_1a9b409:
    ebx.b = *esi
    esi += 1
    var_8_1 = esi
else if (ebx.b == 0x2b)
    goto label_1a9b409

if (arg3 s< 0 || arg3 == 1 || arg3 s> 0x24)
    char** eax_26 = arg2
    
    if (eax_26 != 0)
        *eax_26 = edi
    
    return 0

int32_t ecx_1 = 0x10

if (arg3 != 0)
    goto label_1a9b457

if (ebx.b == 0x30)
    int32_t eax_4
    eax_4.b = *esi
    
    if (eax_4.b == 0x78 || eax_4.b == 0x58)
        arg3 = 0x10
    label_1a9b457:
        
        if (arg3 == 0x10 && ebx.b == 0x30)
            eax_4.b = *esi
            
            if (eax_4.b == 0x78 || eax_4.b == 0x58)
                ebx.b = *(esi + 1)
                var_8_1 = esi + 2
    else
        arg3 = 8
else
    arg3 = 0xa

int32_t eax_5 = 0xffffffff
int32_t edx_1 = 0
void* eax_6 = divu.dp.d(edx_1:eax_5, arg3)
uint32_t edx_2 = modu.dp.d(edx_1:eax_5, arg3)
void* var_10_1 = eax_6

while (true)
    uint32_t esi_3 = zx.d(ebx.b)
    BOOL eax_7
    
    if (data_1bfc3ac s<= 1)
        wchar16 (* eax_8)[0x21]
        eax_8.b = (*data_1bfc1a0)[esi_3].b
        eax_7 = eax_8 & 4
    else
        eax_7, edx_2 = sub_1a981ac(eax_6, edx_2, ecx_1, esi_3)
        ecx_1 = 4
    
    if (eax_7 == 0)
        BOOL eax_9
        
        if (data_1bfc3ac s<= 1)
            wchar16 (* eax_10)[0x21]
            eax_10.w = (*data_1bfc1a0)[esi_3]
            eax_9 = eax_10 & 0x103
        else
            eax_9 = sub_1a981ac(eax_7, edx_2, ecx_1, esi_3)
        
        if (eax_9 == 0)
            break
        
        uint32_t eax_12
        eax_12, edx_2 = sub_1a9e088(sx.d(ebx.b))
        ecx_1 = eax_12 - 0x37
    else
        ecx_1 = sx.d(ebx.b) - 0x30
    
    if (ecx_1 u>= arg3)
        break
    
    arg4 |= 8
    
    if (result u>= var_10_1 && result == var_10_1)
        edx_2 = modu.dp.d(0:0xffffffff, arg3)
    
    if (result u< var_10_1 || (result == var_10_1 && ecx_1 u<= edx_2))
        result = result * arg3 + ecx_1
    else
        arg4 |= 4
    
    eax_6 = var_8_1
    var_8_1 += 1
    ebx.b = *eax_6

void* var_8_2 = var_8_1 - 1

if ((arg4.b & 8) == 0)
    if (arg2 != 0)
        var_8_2 = arg1
    
    result = 0
else if ((arg4.b & 4) != 0)
label_1a9b569:
    *sub_1a95a86() = 0x22
    
    if ((arg4.b & 1) == 0)
        int32_t eax_19
        eax_19.b = arg4.b & 2
        char temp4_1 = eax_19.b
        eax_19.b = neg.b(eax_19.b)
        result = neg.d(sbb.d(eax_19, eax_19, temp4_1 != 0)) + 0x7fffffff
    else
        result = 0xffffffff
else if ((arg4.b & 1) == 0)
    int32_t eax_17 = arg4 & 2
    
    if (eax_17 != 0 && result u> 0x80000000)
        goto label_1a9b569
    
    if (eax_17 == 0 && result u> 0x7fffffff)
        goto label_1a9b569

if (arg2 != 0)
    *arg2 = var_8_2

if ((arg4.b & 2) == 0)
    return result

return neg.d(result)
