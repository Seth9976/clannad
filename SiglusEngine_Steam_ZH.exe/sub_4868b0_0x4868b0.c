// 函数: sub_4868b0
// 地址: 0x4868b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
uint32_t i = arg1
int32_t edi
int32_t var_14 = edi
int32_t result = 3
char* esi = &data_b98080

if (i == 0x2d || i == 0x2b)
    void* ecx_1 = data_b9a5e0
    data_b98080 = i.b
    esi = &data_b98081
    i = sub_48643c(ecx_1)

void* ecx_3

for (; i != 0xffffffff; i = sub_48643c(ecx_3))
    if (_isdigit(i) == 0)
        break
    
    ecx_3 = data_b9a5e0
    *esi = i.b
    esi = &esi[1]

if (i == 0x2e)
    *esi = i.b
    
    while (true)
        esi = &esi[1]
        i = sub_48643c(data_b9a5e0)
        
        if (i == 0xffffffff)
            break
        
        if (_isdigit(i) == 0)
            break
        
        *esi = i.b
    
    if (i == 0x65 || i == 0x45)
        void* ecx_6 = data_b9a5e0
        *esi = i.b
        esi = &esi[1]
        i = sub_48643c(ecx_6)
        
        if (i == 0x2b)
            goto label_486967
        
        if (i == 0x2d)
            goto label_486967
        
        void* ecx_8
        
        for (; i != 0xffffffff; i = sub_48643c(ecx_8))
            if (_isdigit(i) == 0)
                break
            
        label_486967:
            ecx_8 = data_b9a5e0
            *esi = i.b
            esi = &esi[1]
    
    result = 4

if (i != 0xffffffff)
    (*(**(data_b9a5e0 + 0xc) + 8))()

*esi = 0

if (result == 4)
    data_b9a5a8 = fconvert.s(_atof(&data_b98080))
else if (result == 3)
    data_b9a5a8 = _atol(&data_b98080)

return result
