// 函数: sub_721900
// 地址: 0x721900
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t ebx
ebx:1.b = 0
arg1.b = 0
char var_14 = arg1.b

if (esi[0x32] != 0)
    arg1 = nullptr
    
    if (esi[0x33] != 0)
        arg1 = 1
    
    var_14 = arg1.b

int32_t edi = arg2
int32_t edx = arg4

if (edi s> edx)
    int32_t eax_1 = edi
    edi = edx
    edx = eax_1
    arg4 = edx

int32_t eax_2 = arg5
int32_t edx_3 = arg3

if (edx_3 s> eax_2)
    eax_2 = edx_3
    edx_3 = arg5
    arg3 = edx_3
    arg5 = eax_2

int32_t* var_10
int32_t var_c
int32_t var_8

if (arg1.b == 0)
    ebx.b = arg5:3.b
    int32_t* var_20
    var_10 = var_20
    int32_t var_24
    var_c = var_24
    int32_t var_28
    var_8 = var_28
    int32_t var_2c
    arg2 = var_2c
else
    int32_t* eax_5 = esi[0x33]
    ebx.b = 0
    arg2 = *eax_5
    var_8 = eax_5[1]
    var_c = eax_5[2]
    var_10 = eax_5[3]

int32_t var_3c = arg6
int32_t var_40 = edx_3
int32_t var_44 = arg4
int32_t var_48 = edx_3

if (sub_7215b0(esi, edi).b != 0)
    if (var_14 != 0)
        int32_t* eax_11 = esi[0x33]
        ebx.b = 1
        arg2 = *eax_11
        var_8 = eax_11[1]
        var_c = eax_11[2]
        var_10 = eax_11[3]
    
    ebx:1.b = 1

int32_t* result

if (eax_2 - edx_3 + 1 s> 1)
    int32_t var_3c_1 = arg6
    int32_t var_40_1 = arg5
    int32_t var_44_1 = arg4
    int32_t var_48_1 = arg5
    result = sub_7215b0(esi, edi)
    
    if (result.b != 0)
        if (var_14 != 0)
            if (ebx.b != 0)
                result = esi[0x33]
            
            if (ebx.b == 0 || arg2 s> *result)
                result = esi[0x33]
                arg2 = *result
            
            if (ebx.b == 0 || var_8 s> result[1])
                var_8 = result[1]
            
            if (ebx.b == 0 || var_c s< result[2])
                var_c = result[2]
            
            if (ebx.b == 0 || var_10 s< result[3])
                var_10 = result[3]
            
            ebx.b = 1
        
        ebx:1.b = 1
    
    if (eax_2 - edx_3 + 1 s<= 2)
        goto label_721b5f
    
    int32_t var_3c_2 = arg6
    int32_t ecx_16 = arg5 - 1
    int32_t var_40_2 = ecx_16
    int32_t eax_14 = arg3 + 1
    int32_t var_44_2 = edi
    int32_t var_48_2 = eax_14
    result = sub_7215b0(esi, edi)
    
    if (result.b != 0)
        if (var_14 != 0)
            if (ebx.b != 0)
                result = esi[0x33]
            
            if (ebx.b == 0 || arg2 s> *result)
                result = esi[0x33]
                arg2 = *result
            
            if (ebx.b == 0 || var_8 s> result[1])
                var_8 = result[1]
            
            if (ebx.b == 0 || var_c s< result[2])
                var_c = result[2]
            
            if (ebx.b == 0 || var_10 s< result[3])
                var_10 = result[3]
            
            ebx.b = 1
        
        ebx:1.b = 1
    
    if (edx - edi + 1 s> 1)
        int32_t var_3c_3 = arg6
        int32_t var_40_3 = ecx_16
        int32_t var_44_3 = arg4
        int32_t var_48_3 = eax_14
        result = sub_7215b0(esi, arg4)
        
        if (result.b != 0)
            if (var_14 != 0)
                if (ebx.b != 0)
                    result = esi[0x33]
                
                if (ebx.b == 0 || arg2 s> *result)
                    result = esi[0x33]
                    arg2 = *result
                
                if (ebx.b == 0 || var_8 s> result[1])
                    var_8 = result[1]
                
                if (ebx.b == 0 || var_c s< result[2])
                    var_c = result[2]
                
                if (ebx.b == 0 || var_10 s< result[3])
                    var_10 = result[3]
                
                ebx.b = 1
            
            ebx:1.b = 1
            goto label_721b63

label_721b5f:

if (ebx:1.b != 0)
label_721b63:
    
    if (var_14 != 0)
        *esi[0x33] = arg2
        *(esi[0x33] + 4) = var_8
        *(esi[0x33] + 8) = var_c
        *(esi[0x33] + 0xc) = var_10
        *esi[0x32] = ebx.b

result.b = ebx:1.b
return result
