// 函数: sub_48cc80
// 地址: 0x48cc80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx_2 = data_131310c
int32_t result = ecx_2 - data_108f30c

if (result u>= 0x32)
    bool cond:0_1 = (data_108f308 & 1) != 0
    int32_t eax_1 = 0xffffffff
    data_108f30c = ecx_2
    int32_t ecx = data_108f310
    
    if (cond:0_1)
        eax_1 = ecx
    
    data_13130dc = eax_1
    result = data_108f308.d + 1
    data_108f308.d = result
    
    if ((result.b & 1) != 0)
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(result)
        result = (eax_3 - edx_1) s>> 1
        
        if (result s>= data_12dc624)
            data_13130dc = ecx
            sub_4996a0(sub_48b7f0(), &data_13130c0)
            bool cond:1_1 = data_1af1768 == 0
            data_107eff4 = 0
            data_107eff0 = 0xff
            data_107efa0 = 0xfffffffe
            data_107efa4 = 0xffffffff
            data_13701d8 = 0
            data_137010c = 1
            data_703670 = 0
            data_1372c14 = 1
            data_1af178c = 0
            data_1af1784 = 0
            
            if (not(cond:1_1))
                data_1af177c = 1
                data_1af1768 = 0
            
            sub_48d140()
            result = data_1af1788
            
            if (data_71929c == 0x11)
                result = 1
            
            data_1af1788 = result

return result
