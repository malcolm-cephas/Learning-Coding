

import React, { useState, useEffect } from 'react';
import { Bar } from 'react-chartjs-2';
import { Chart as ChartJS, CategoryScale, LinearScale, BarElement, Title, Tooltip, Legend } from 'chart.js';

ChartJS.register(CategoryScale, LinearScale, BarElement, Title, Tooltip, Legend);

const WeatherDisplay = () => {
    const [data, setData] = useState(null);

    useEffect(() => {

        const weatherData = {
            current: 22,
            historical: [18, 20, 22, 19, 21, 23, 22]
        };
        setData(weatherData);
    }, []);

    if (!data) return <div>Loading weather...</div>;

    const chartData = {
        labels: ['Day 1', 'Day 2', 'Day 3', 'Day 4', 'Day 5', 'Day 6', 'Today'],
        datasets: [{
            label: 'Temp (°C)',
            data: data.historical,
            backgroundColor: 'rgba(75, 192, 192, 0.6)'
        }]
    };

    return (
        <div>
            <h2>Weather Representation</h2>
            <div style={{ width: '600px' }}>
                <Bar data={chartData} />
            </div>
        </div>
    );
};

export default WeatherDisplay;
