// 函数: sub_41a380
// 地址: 0x41a380
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg4
*result = 0xfffffffd
*arg5 = 0xfffffffd

if (data_f89944 != 0)
    *result = 0xffffffff
    *arg5 = 0xffffffff
    
    if (data_1321ec4 == 0)
        result = sub_4534a0()
        
        if (result == 0)
            int32_t edi_1 = arg2 s>> 1
            int32_t esi_1 = arg3 s>> 1
            
            if (esi_1 s>= 0)
                void* ecx_1 = data_f8994c
                result = *(ecx_1 + 8)
                
                if (esi_1 s< result && edi_1 s>= 0 && edi_1 s< *(ecx_1 + 0xc))
                    uint32_t ecx_2 = zx.d(*(result * edi_1 + data_f89954 + esi_1))
                    *arg4 = ecx_2
                    result = zx.d(*(ecx_2 + data_f89950))
                    *arg5 = result

return result
