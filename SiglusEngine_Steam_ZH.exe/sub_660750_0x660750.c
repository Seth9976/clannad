// 函数: sub_660750
// 地址: 0x660750
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg3
int32_t ebx
ebx.b = arg2

if (arg3 s>= 0)
    arg1 = data_bac510
    
    if (arg1[0x42e4] + arg1[0x42e3] + arg1[0x42e2] s> arg3)
        arg1 = sub_6a5240(data_bac504 + 0x4b068, arg3)
        
        if (arg1.b != 0)
            if (ebx.b != 0 && *(data_bac4e4 + 0x19b) != 0)
                arg1 = sub_60e120(data_bac510 + 0x10ac8)
            
            if (ebx.b == 0 || *(data_bac4e4 + 0x19b) == 0 || arg1 != 7)
                *(data_bac4a0 + 0x1e4) = 0
                int32_t eax_3
                int32_t ecx_3
                eax_3, ecx_3 = sub_676540(6)
                
                if (arg5 != 0)
                    sub_676610(4)
                    eax_3, ecx_3 = sub_676610(2)
                
                if (arg4 != 0)
                    int32_t var_1c_2 = ecx_3
                    sub_6018e0(data_bac468 + 0x304, 5)
                
                eax_3.b = 1
                return eax_3

arg1.b = 0
return arg1
