{-# LANGUAGE BlockArguments #-}

module Main (main) where

main :: IO ()
main = putStrLn (show (ways [1, 2, 5, 10, 20, 50, 100, 200] 200))

ways :: [Int] -> Int -> Int
ways [] 0 = 1
ways [] _ = 0
ways (c : cs) n = sum do
    i <- [0 .. (div n c)]
    pure (ways cs (n - i * c))
