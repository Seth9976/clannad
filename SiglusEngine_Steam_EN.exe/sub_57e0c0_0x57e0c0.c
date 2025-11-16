// 函数: sub_57e0c0
// 地址: 0x57e0c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

data_107efa0 = arg2
data_107eff4 = 0
data_107eff0 = 0xff
data_107efa8 = 0
data_107efa4 = 0xffffffff

if (arg1 == 0xffffffff)
label_57e101:
    data_107efa4 = arg1
    
    if (arg2 u<= 0x1f)
        int32_t ecx = arg2 * 5
        
        if (*((ecx << 3) + &data_1319240) != 0)
            int32_t edx = *((ecx << 3) + &data_1319258)
            data_107f01c += 1
            int32_t ecx_1 = *((ecx << 3) + &data_1319264)
            data_107f0d8 = data_131310c
            data_107f0cc = 0
            data_107f0c0 = edx - 1
            data_107f0c4 = 0
            data_107f0e4 = 0
            
            if (ecx_1 s< 0)
                ecx_1 = neg.d(ecx_1)
            
            data_107f0e0 = ecx_1
            data_107f0dc = 0
            data_107f0d0 = edx - 1
            data_107f0c8 = edx != 1
            data_107f0d4 = 0
            return 
        
        data_107eff4 = 0
        data_107eff0 = 0xff
        data_107efa0 = 0xfffffffe
        data_107efa4 = 0xffffffff
else if (arg1 s>= 0 && arg1 s< 0x40)
    goto label_57e101
