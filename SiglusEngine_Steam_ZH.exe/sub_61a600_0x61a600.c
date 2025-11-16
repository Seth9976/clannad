// 函数: sub_61a600
// 地址: 0x61a600
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx
void* var_4 = ecx
int32_t* eax = data_bac450
float edx = eax[0x1a]
int32_t* result

switch (*eax)
    case 0
        result = sub_61aa50(ecx, edx)
        
        if (result.b == 0)
            return result
    case 1
        void* var_8_2 = ecx
        result = sub_61a990(ecx)
        
        if (result.b == 0)
            return result
    case 2
        void* var_8_3 = ecx
        result = sub_61a9f0(ecx)
        
        if (result.b == 0)
            return result
    case 5, 0xa, 0xb, 0x14, 0x15, 0x16, 0x1e, 0x1f, 0x20, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x3c, 0x3d, 
            0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 
            0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x5a, 0x5b, 0x5c, 0x5d, 0x64, 0x65, 
            0x66, 0x6e, 0x6f, 0x78, 0x79, 0x7a, 0x82, 0x83, 0x84, 0x8c, 0x8d, 0x8e, 0x96, 0x97, 
            0x98, 0x384, 0x385
        result = sub_61aca0(ecx, edx)
        
        if (result.b == 0)
            return result
    case 0x32
        result = sub_61b3b0(ecx, edx)
        
        if (result.b == 0)
            return result
    case 0xc8
    label_61a949:
        result = sub_61bd80(ecx, edx)
        
        if (result.b == 0)
            return result
    case 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7
        result = sub_61d1f0(ecx, edx)
        
        if (result.b == 0)
            return result
    case 0xdc
        result = sub_61b6e0(ecx, edx)
        
        if (result.b == 0)
            return result
    case 0xdd
        result = sub_61b960(ecx, edx)
        
        if (result.b == 0)
            return result
    case 0xe6, 0xe7
        result = sub_61eda0(ecx, edx)
        
        if (result.b == 0)
            return result
    case 0xf0, 0xf1, 0xf2, 0xf3
        result = sub_61e1d0(ecx, edx)
        
        if (result.b == 0)
            return result
    case 0x12c, 0x12d
        goto label_61a949

result.b = 1
return result
