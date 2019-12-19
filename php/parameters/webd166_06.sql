-- phpMyAdmin SQL Dump
-- version 4.9.0.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Nov 17, 2019 at 11:52 PM
-- Server version: 10.4.6-MariaDB
-- PHP Version: 7.3.8

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `webd166_06`
--

-- --------------------------------------------------------

--
-- Table structure for table `entries`
--

CREATE TABLE `entries` (
  `id` int(10) UNSIGNED NOT NULL,
  `title` varchar(100) NOT NULL,
  `entry` text NOT NULL,
  `date_entered` datetime NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `entries`
--

INSERT INTO `entries` (`id`, `title`, `entry`, `date_entered`) VALUES
(1, 'Test (edited)', 'Test again and again.', '2019-11-14 22:10:42'),
(2, 'This is another test! (Edited)', '\"Will these quotes and apostrophes cause problems?\" , you ask. I don\'t think so! It still work.', '2019-11-14 22:19:43'),
(3, 'Landing on the moon', 'That\'s one small step for a man, one giant leap for science.', '2019-11-15 20:35:01'),
(4, 'This is another test!', 'Will these quotes and apostrophes cause problems?', '2019-11-15 20:35:48'),
(5, 'I have green eyes', 'Only 2% of the Earths\' population naturally has green eyes.', '2019-11-15 20:36:30'),
(6, 'Veterans Day', 'Veterans Day is always observed on November 11.', '2019-11-15 20:37:21'),
(7, 'Jeremiah Purba', 'Taking WEBD166 is fun.', '2019-11-16 20:46:49'),
(8, 'I like Thanksgiving Day', 'Because I can eat various kind of food.', '2019-11-16 20:48:21'),
(9, 'Nelson Mandela', 'It always seems impossible until its done.', '2019-11-16 20:50:47'),
(10, 'Helen Keller', 'Optimism is the faith that leads to acievement. Nothing can be done without hope and confidence.', '2019-11-16 20:51:13'),
(11, 'Confucius', 'It does not matter how slowly you go as long as you do not stop.', '2019-11-17 14:51:36');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `entries`
--
ALTER TABLE `entries`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `entries`
--
ALTER TABLE `entries`
  MODIFY `id` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=16;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
