// 函数: sub_4a33f0
// 地址: 0x4a33f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

data_1af16c0 = data_1af16c4
void* ebx = arg3
data_1bfe258 = data_1bfe254
char arg_8
arg3.b = arg_8
data_1bfe250 = data_1bfe24c
int32_t esi = arg2
data_1bfe24c = zx.d(arg3.b)
int32_t result = arg4
data_1af17ac = 0
data_1af16c4 = ebx
data_1bfe254 = esi
data_1af0f3c = ebx
data_1bfe248 = esi
data_1af17c9 = arg3.b
data_1370100 = ebx
data_1bfe244 = esi
data_1311176 = arg3.b
data_703660 = ebx
data_703668 = esi
data_703664 = arg3.b
data_70366c = result
data_187c51f = 0
data_1af1710 = 0
data_187c51e = 0
data_187c51d = 0
data_187c528 = 0
data_1af1714 = 0

if (result == 0)
label_4a350a:
    int32_t eax_4 = 0xff
    
    if (esi u<= 0x3f)
        eax_4 = *((esi << 2) + &data_1313b7c)
    
    arg2.b = arg3.b
    int32_t* ecx_3
    int32_t edx
    result, ecx_3, edx = sub_4a27f0(eax_4, arg2.b, ebx, 0, 0, eax_4)
    
    if (result != 0 && data_13132c0 == 2)
        data_187c51f = 1
        data_1af1710 = 0
        data_187c51e = 0
        data_187c51d = 1
    
    if (result == 2)
        data_1af1714 = 1
        char* var_14_2 = &arg_8
        result = sub_4c3280(&arg_8, edx, data_63e16c, ecx_3)
        
        if (result != 0)
            return sub_445680(ebx, arg_8.d) __tailcall
else if (data_13132c0 != 1)
    if (data_7036e8 == 1 && data_12a47a0 == 1 && esi u<= 0x3f)
        int32_t edi_1 = *((esi << 2) + &data_1301a58)
        
        if (edi_1 s> 0)
            arg2 = 0
            
            if (edi_1 s> 0)
                arg3 = (esi << 8) + &data_1301b58
                
                do
                    result = *arg3
                    
                    if ((&data_1313b3c)[result] == 0)
                        return result
                    
                    arg2 += 1
                    arg3 += 4
                while (arg2 s< edi_1)
                
                arg3.b = arg_8
    
    goto label_4a350a

return result
