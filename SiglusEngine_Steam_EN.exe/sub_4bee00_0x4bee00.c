// 函数: sub_4bee00
// 地址: 0x4bee00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
uint32_t result = data_1bfe268

if (result == 0xffffffff)
    if (data_1af44ec == 0)
        int32_t esi_1 = data_1bfffcc
        data_1bfffcc = 0xffffffff
        data_208c49c = 0
        int32_t edx
        
        if (esi_1 != 0xffffffff)
            result, edx = sub_4bed70(result, edx, esi_1, &data_208c4a0)
            data_1bfe268 = result
        
        if (esi_1 != 0xffffffff && result != 0xffffffff)
            bool cond:0_1 = data_208c4a0 == 0
            data_1bfffcc = esi_1
            
            if (not(cond:0_1))
                data_208c49c = 1
            
            goto label_4bef0d
        
        if (data_208c4a0 != 0)
            for (int32_t i = 0; i s< 0x1a; i += 1)
                result, edx = sub_4bed70(result, edx, i, &data_208c4a0)
                data_1bfe268 = result
                
                if (result != 0xffffffff)
                    data_1bfffcc = i
                    data_208c49c = 1
                    goto label_4beed1
            
            goto label_4beed6
        
    label_4beed1:
        
        if (result != 0xffffffff)
            goto label_4bef0d
        
    label_4beed6:
        
        if (data_1af44fc == 0)
            int32_t esi_2 = 0
            
            while (true)
                result, edx = sub_4bed70(result, edx, esi_2, nullptr)
                data_1bfe268 = result
                
                if (result != 0xffffffff)
                    data_1bfffcc = esi_2
                    break
                
                esi_2 += 1
                
                if (esi_2 s>= 0x1a)
                    return result
            
            goto label_4bef08
    else
        int32_t ecx_1 = data_1bfffcc
        
        if (ecx_1 != result)
            result = sub_4bec90(ecx_1)
            data_1bfe268 = result
        label_4bef08:
            
            if (result != 0xffffffff)
            label_4bef0d:
                data_208c6ec = 0
                data_208c70c = 0
                result = sub_4c0050()
                
                if (data_208c70c == 0)
                    return sub_4bfee0()

return result
